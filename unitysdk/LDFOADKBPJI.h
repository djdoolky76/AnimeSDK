#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDFOADKBPJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDFOADKBPJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F7650)
#define LDFOADKBPJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F7920)
#define LDFOADKBPJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F72A0)
#define LDFOADKBPJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F7270)
#define LDFOADKBPJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F7260)
#define LDFOADKBPJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F7410)
#define LDFOADKBPJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F7330)
#define LDFOADKBPJI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8F7320)
#define LDFOADKBPJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F74E0)
#define LDFOADKBPJI_GMMBPFAAMNI_OFFSET UNITYSDK_OFFSET(0x1E8F7300)
#define LDFOADKBPJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F7220)
#define LDFOADKBPJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F77A0)
#define LDFOADKBPJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F7760)
#define LDFOADKBPJI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8F7310)
#define LDFOADKBPJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F7250)
#define LDFOADKBPJI_PDBNNPAGNDD_OFFSET UNITYSDK_OFFSET(0x1E8F72F0)
#define LDFOADKBPJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F7510)
#define LDFOADKBPJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F7570)

inline static constexpr unsigned int LDFOADKBPJI_TypeDefinitionIndex = 32186;

	class LDFOADKBPJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MKFMBJPPCAB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LDFOADKBPJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDFOADKBPJI*>**)UnitySDK::FromName("", "LDFOADKBPJI")->GetStaticField(0x33FB0);
		}

		// static const ::System::Object FCKNJBENJKH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDFOADKBPJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDFOADKBPJI*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFOADKBPJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDFOADKBPJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDFOADKBPJI*>*(*)())((::PBYTE)hIl2Cpp + LDFOADKBPJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDFOADKBPJI* Clone()
		{
			return ((::LDFOADKBPJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 PDBNNPAGNDD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_PDBNNPAGNDD_OFFSET))(this);
		}

		::System::Void GMMBPFAAMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDFOADKBPJI_GMMBPFAAMNI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDFOADKBPJI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDFOADKBPJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDFOADKBPJI*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDFOADKBPJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDFOADKBPJI*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDFOADKBPJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
