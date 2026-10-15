#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIDHIFECNAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIDHIFECNAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E82A510)
#define KIDHIFECNAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82A7E0)
#define KIDHIFECNAH_CIEEPJAFJGN_OFFSET UNITYSDK_OFFSET(0x1E82A1C0)
#define KIDHIFECNAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E82A160)
#define KIDHIFECNAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E82A130)
#define KIDHIFECNAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E82A120)
#define KIDHIFECNAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E82A2D0)
#define KIDHIFECNAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E82A1F0)
#define KIDHIFECNAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E82A3A0)
#define KIDHIFECNAH_IAJKFOOGAIG_OFFSET UNITYSDK_OFFSET(0x1E82A1E0)
#define KIDHIFECNAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E82A0E0)
#define KIDHIFECNAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E82A660)
#define KIDHIFECNAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E82A620)
#define KIDHIFECNAH_MPAPGAGAOGK_OFFSET UNITYSDK_OFFSET(0x1E82A1D0)
#define KIDHIFECNAH_NIJLCPMOJGB_OFFSET UNITYSDK_OFFSET(0x1E82A1B0)
#define KIDHIFECNAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E82A110)
#define KIDHIFECNAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E82A3D0)
#define KIDHIFECNAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E82A430)

inline static constexpr unsigned int KIDHIFECNAH_TypeDefinitionIndex = 33507;

	class KIDHIFECNAH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CJELDLFFFOM; // 0x18
		::System::UInt32 EGFOJLHABKM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KIDHIFECNAH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KIDHIFECNAH*>**)UnitySDK::FromName("", "KIDHIFECNAH")->GetStaticField(0x18070);
		}

		// static const ::System::Object HFHBNCLBBCA; // 0x0
		// static const ::System::Object NEJHACHDJLN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHIFECNAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIDHIFECNAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIDHIFECNAH*))((::PBYTE)hIl2Cpp + KIDHIFECNAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIDHIFECNAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KIDHIFECNAH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KIDHIFECNAH*>*(*)())((::PBYTE)hIl2Cpp + KIDHIFECNAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHIFECNAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIDHIFECNAH* Clone()
		{
			return ((::KIDHIFECNAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHIFECNAH_CLONE_OFFSET))(this);
		}

		::System::UInt32 NIJLCPMOJGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHIFECNAH_NIJLCPMOJGB_OFFSET))(this);
		}

		::System::Void CIEEPJAFJGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIDHIFECNAH_CIEEPJAFJGN_OFFSET))(this, a1);
		}

		::System::UInt32 MPAPGAGAOGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHIFECNAH_MPAPGAGAOGK_OFFSET))(this);
		}

		::System::Void IAJKFOOGAIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIDHIFECNAH_IAJKFOOGAIG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIDHIFECNAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIDHIFECNAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIDHIFECNAH*))((::PBYTE)hIl2Cpp + KIDHIFECNAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHIFECNAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHIFECNAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIDHIFECNAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHIFECNAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIDHIFECNAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIDHIFECNAH*))((::PBYTE)hIl2Cpp + KIDHIFECNAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIDHIFECNAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
