#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGEHGBKOBEF;
class EDOIEMCFFCA;
class HNKAOFDGLIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGEHGBKOBEF_BGHKDLONBOD_OFFSET UNITYSDK_OFFSET(0x1E129BD0)
#define AGEHGBKOBEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E12A1B0)
#define AGEHGBKOBEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12A480)
#define AGEHGBKOBEF_CHJDPHDGMBD_OFFSET UNITYSDK_OFFSET(0x1E129BF0)
#define AGEHGBKOBEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E129B20)
#define AGEHGBKOBEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E129A80)
#define AGEHGBKOBEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E129A70)
#define AGEHGBKOBEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E129E40)
#define AGEHGBKOBEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E129C10)
#define AGEHGBKOBEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E12A070)
#define AGEHGBKOBEF_IBAGHDNPGCO_OFFSET UNITYSDK_OFFSET(0x1E129BE0)
#define AGEHGBKOBEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E129A30)
#define AGEHGBKOBEF_KFEEOKFJILG_OFFSET UNITYSDK_OFFSET(0x1E129C00)
#define AGEHGBKOBEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E12A2E0)
#define AGEHGBKOBEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E12A240)
#define AGEHGBKOBEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E129A60)
#define AGEHGBKOBEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E12A0D0)
#define AGEHGBKOBEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E12A130)

inline static constexpr unsigned int AGEHGBKOBEF_TypeDefinitionIndex = 32656;

	class AGEHGBKOBEF : public ::System::Object
	{
	public:
		::HNKAOFDGLIE* JIHIDBNIKAG; // 0x10
		::EDOIEMCFFCA* OKBMHHFOEMO; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AGEHGBKOBEF")->GetStaticField(0x303D0);
		}

		// static const ::System::Object MCEJJGELGPI; // 0x0
		// static const ::System::Object PHPIFEOCONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGEHGBKOBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEHGBKOBEF*))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGEHGBKOBEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AGEHGBKOBEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGEHGBKOBEF* Clone()
		{
			return ((::AGEHGBKOBEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_CLONE_OFFSET))(this);
		}

		::HNKAOFDGLIE* BGHKDLONBOD()
		{
			return ((::HNKAOFDGLIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_BGHKDLONBOD_OFFSET))(this);
		}

		::System::Void IBAGHDNPGCO(::HNKAOFDGLIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNKAOFDGLIE*))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_IBAGHDNPGCO_OFFSET))(this, a1);
		}

		::EDOIEMCFFCA* CHJDPHDGMBD()
		{
			return ((::EDOIEMCFFCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_CHJDPHDGMBD_OFFSET))(this);
		}

		::System::Void KFEEOKFJILG(::EDOIEMCFFCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDOIEMCFFCA*))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_KFEEOKFJILG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGEHGBKOBEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGEHGBKOBEF*))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGEHGBKOBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEHGBKOBEF*))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGEHGBKOBEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
