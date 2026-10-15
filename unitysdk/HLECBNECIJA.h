#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJFCEEBAGMF;
class HLECBNECIJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define HLECBNECIJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E58EFB0)
#define HLECBNECIJA_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E58E8E0)
#define HLECBNECIJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58F3D0)
#define HLECBNECIJA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E58E7C0)
#define HLECBNECIJA_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E58E8C0)
#define HLECBNECIJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E58E6F0)
#define HLECBNECIJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58E6E0)
#define HLECBNECIJA_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E58E8F0)
#define HLECBNECIJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E58EB30)
#define HLECBNECIJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E58E900)
#define HLECBNECIJA_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E58E8D0)
#define HLECBNECIJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E58ED60)
#define HLECBNECIJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E58E6A0)
#define HLECBNECIJA_LAFLLKALOKG_OFFSET UNITYSDK_OFFSET(0x1E58E8A0)
#define HLECBNECIJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E58F1D0)
#define HLECBNECIJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E58F0C0)
#define HLECBNECIJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E58E6D0)
#define HLECBNECIJA_PKEBLDKEKEF_OFFSET UNITYSDK_OFFSET(0x1E58E8B0)
#define HLECBNECIJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E58EE10)
#define HLECBNECIJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E58EE70)

inline static constexpr unsigned int HLECBNECIJA_TypeDefinitionIndex = 28426;

	class HLECBNECIJA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::HJFCEEBAGMF* ILNJBEANIJD; // 0x20
		::System::UInt32 NBFPOGFBMFE; // 0x28
		static ::Google::Protobuf::MessageParser_1<::HLECBNECIJA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HLECBNECIJA*>**)UnitySDK::FromName("", "HLECBNECIJA")->GetStaticField(0x37B80);
		}

		// static const ::System::Object IABFMNIGPLM; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECBNECIJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLECBNECIJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLECBNECIJA*))((::PBYTE)hIl2Cpp + HLECBNECIJA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLECBNECIJA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HLECBNECIJA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HLECBNECIJA*>*(*)())((::PBYTE)hIl2Cpp + HLECBNECIJA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECBNECIJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLECBNECIJA* Clone()
		{
			return ((::HLECBNECIJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECBNECIJA_CLONE_OFFSET))(this);
		}

		::HJFCEEBAGMF* LAFLLKALOKG()
		{
			return ((::HJFCEEBAGMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECBNECIJA_LAFLLKALOKG_OFFSET))(this);
		}

		::System::Void PKEBLDKEKEF(::HJFCEEBAGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFCEEBAGMF*))((::PBYTE)hIl2Cpp + HLECBNECIJA_PKEBLDKEKEF_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECBNECIJA_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + HLECBNECIJA_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECBNECIJA_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLECBNECIJA_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLECBNECIJA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLECBNECIJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLECBNECIJA*))((::PBYTE)hIl2Cpp + HLECBNECIJA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECBNECIJA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECBNECIJA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLECBNECIJA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECBNECIJA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLECBNECIJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLECBNECIJA*))((::PBYTE)hIl2Cpp + HLECBNECIJA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLECBNECIJA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
