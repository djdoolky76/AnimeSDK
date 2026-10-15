#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMDEBPDKCAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMDEBPDKCAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B4DC0)
#define IMDEBPDKCAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B50E0)
#define IMDEBPDKCAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B4A00)
#define IMDEBPDKCAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B49C0)
#define IMDEBPDKCAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B49B0)
#define IMDEBPDKCAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B4B70)
#define IMDEBPDKCAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B4A90)
#define IMDEBPDKCAJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6B4A80)
#define IMDEBPDKCAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B4C40)
#define IMDEBPDKCAJ_HBMDDNLCOPK_OFFSET UNITYSDK_OFFSET(0x1E6B4A50)
#define IMDEBPDKCAJ_IGEIPOHDFIH_OFFSET UNITYSDK_OFFSET(0x1E6B4A60)
#define IMDEBPDKCAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B4970)
#define IMDEBPDKCAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B4F60)
#define IMDEBPDKCAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B4F20)
#define IMDEBPDKCAJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6B4A70)
#define IMDEBPDKCAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B49A0)
#define IMDEBPDKCAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B4C80)
#define IMDEBPDKCAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B4CE0)

	class IMDEBPDKCAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 ICJLCENOPKP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IMDEBPDKCAJ")->GetStaticField(0x56DE0);
		}

		// static const ::System::Object KIPBCONBHCJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMDEBPDKCAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMDEBPDKCAJ*))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMDEBPDKCAJ* Clone()
		{
			return ((::IMDEBPDKCAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_CLONE_OFFSET))(this);
		}

		::System::UInt64 HBMDDNLCOPK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_HBMDDNLCOPK_OFFSET))(this);
		}

		::System::Void IGEIPOHDFIH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_IGEIPOHDFIH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMDEBPDKCAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMDEBPDKCAJ*))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMDEBPDKCAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMDEBPDKCAJ*))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
