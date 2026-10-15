#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKLDDAAECLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKLDDAAECLN_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1E5B42F0)
#define HKLDDAAECLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B4680)
#define HKLDDAAECLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4950)
#define HKLDDAAECLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B4280)
#define HKLDDAAECLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B4250)
#define HKLDDAAECLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4240)
#define HKLDDAAECLN_EGCLOPOJINE_OFFSET UNITYSDK_OFFSET(0x1E5B4310)
#define HKLDDAAECLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B4440)
#define HKLDDAAECLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B4330)
#define HKLDDAAECLN_FEBLKDMIGII_OFFSET UNITYSDK_OFFSET(0x1E5B4320)
#define HKLDDAAECLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B4510)
#define HKLDDAAECLN_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x1E5B4300)
#define HKLDDAAECLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B41D0)
#define HKLDDAAECLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B47D0)
#define HKLDDAAECLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B4790)
#define HKLDDAAECLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4230)
#define HKLDDAAECLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B4540)
#define HKLDDAAECLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B45A0)

inline static constexpr unsigned int HKLDDAAECLN_TypeDefinitionIndex = 28105;

	class HKLDDAAECLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CLADFMOEPCK; // 0x18
		::System::UInt32 BIIPLBKCBCB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HKLDDAAECLN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HKLDDAAECLN*>**)UnitySDK::FromName("", "HKLDDAAECLN")->GetStaticField(0x20EE0);
		}

		// static const ::System::Object MIPCBMDOFEN; // 0x0
		// static const ::System::Object HFJINAGIMMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLDDAAECLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKLDDAAECLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKLDDAAECLN*))((::PBYTE)hIl2Cpp + HKLDDAAECLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKLDDAAECLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HKLDDAAECLN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HKLDDAAECLN*>*(*)())((::PBYTE)hIl2Cpp + HKLDDAAECLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLDDAAECLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKLDDAAECLN* Clone()
		{
			return ((::HKLDDAAECLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLDDAAECLN_CLONE_OFFSET))(this);
		}

		::System::UInt32 BGDKFHEBDFJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLDDAAECLN_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKLDDAAECLN_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::UInt32 EGCLOPOJINE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLDDAAECLN_EGCLOPOJINE_OFFSET))(this);
		}

		::System::Void FEBLKDMIGII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKLDDAAECLN_FEBLKDMIGII_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKLDDAAECLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKLDDAAECLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKLDDAAECLN*))((::PBYTE)hIl2Cpp + HKLDDAAECLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLDDAAECLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLDDAAECLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKLDDAAECLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLDDAAECLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKLDDAAECLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKLDDAAECLN*))((::PBYTE)hIl2Cpp + HKLDDAAECLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKLDDAAECLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
