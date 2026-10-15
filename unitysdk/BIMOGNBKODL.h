#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIMOGNBKODL;
class CDCCPHILOCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BIMOGNBKODL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE05900)
#define BIMOGNBKODL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE05B70)
#define BIMOGNBKODL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE052C0)
#define BIMOGNBKODL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE05240)
#define BIMOGNBKODL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE05230)
#define BIMOGNBKODL_EADPEGECCBB_OFFSET UNITYSDK_OFFSET(0x1DE05360)
#define BIMOGNBKODL_EKIGKEODABO_OFFSET UNITYSDK_OFFSET(0x1DE05350)
#define BIMOGNBKODL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE054E0)
#define BIMOGNBKODL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE05370)
#define BIMOGNBKODL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE057B0)
#define BIMOGNBKODL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE051F0)
#define BIMOGNBKODL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE059F0)
#define BIMOGNBKODL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE05960)
#define BIMOGNBKODL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE05220)
#define BIMOGNBKODL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE05810)
#define BIMOGNBKODL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE05870)

inline static constexpr unsigned int BIMOGNBKODL_TypeDefinitionIndex = 32312;

	class BIMOGNBKODL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CDCCPHILOCC* ONBNJJEKAPL; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BIMOGNBKODL")->GetStaticField(0x48950);
		}

		// static const ::System::Object HMOKDPHFBFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOGNBKODL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BIMOGNBKODL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIMOGNBKODL*))((::PBYTE)hIl2Cpp + BIMOGNBKODL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIMOGNBKODL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BIMOGNBKODL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOGNBKODL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BIMOGNBKODL* Clone()
		{
			return ((::BIMOGNBKODL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOGNBKODL_CLONE_OFFSET))(this);
		}

		::CDCCPHILOCC* EKIGKEODABO()
		{
			return ((::CDCCPHILOCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOGNBKODL_EKIGKEODABO_OFFSET))(this);
		}

		::System::Void EADPEGECCBB(::CDCCPHILOCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDCCPHILOCC*))((::PBYTE)hIl2Cpp + BIMOGNBKODL_EADPEGECCBB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIMOGNBKODL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BIMOGNBKODL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BIMOGNBKODL*))((::PBYTE)hIl2Cpp + BIMOGNBKODL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOGNBKODL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOGNBKODL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BIMOGNBKODL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMOGNBKODL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BIMOGNBKODL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIMOGNBKODL*))((::PBYTE)hIl2Cpp + BIMOGNBKODL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BIMOGNBKODL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
