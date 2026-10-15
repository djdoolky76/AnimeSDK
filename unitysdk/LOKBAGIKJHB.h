#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOKBAGIKJHB;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOKBAGIKJHB_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E9C2DC0)
#define LOKBAGIKJHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C3370)
#define LOKBAGIKJHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C3750)
#define LOKBAGIKJHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C2CF0)
#define LOKBAGIKJHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C2C60)
#define LOKBAGIKJHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C2C10)
#define LOKBAGIKJHB_EPGHHDPDFFE_OFFSET UNITYSDK_OFFSET(0x1E9C2D80)
#define LOKBAGIKJHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C2EE0)
#define LOKBAGIKJHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C2E40)
#define LOKBAGIKJHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C3000)
#define LOKBAGIKJHB_HOFCCLFHKHP_OFFSET UNITYSDK_OFFSET(0x1E9C2D90)
#define LOKBAGIKJHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C2BD0)
#define LOKBAGIKJHB_KFFMBNFGJOB_OFFSET UNITYSDK_OFFSET(0x1E9C2DB0)
#define LOKBAGIKJHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C3670)
#define LOKBAGIKJHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C3610)
#define LOKBAGIKJHB_MJBLGMNBAPK_OFFSET UNITYSDK_OFFSET(0x1E9C2E30)
#define LOKBAGIKJHB_NEMKAPMKLKG_OFFSET UNITYSDK_OFFSET(0x1E9C2E20)
#define LOKBAGIKJHB_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E9C2DD0)
#define LOKBAGIKJHB_OLEJNDFFHPP_OFFSET UNITYSDK_OFFSET(0x1E9C2DA0)
#define LOKBAGIKJHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C2C00)
#define LOKBAGIKJHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C3140)
#define LOKBAGIKJHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C31A0)

inline static constexpr unsigned int LOKBAGIKJHB_TypeDefinitionIndex = 25313;

	class LOKBAGIKJHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::ByteString* CMDGAIOLHKP; // 0x18
		::System::Int64 HHCEMNIBHIE; // 0x20
		::System::UInt32 DLCNIEFINAG; // 0x28
		::System::UInt32 IFNCKPHGNHE; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::LOKBAGIKJHB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOKBAGIKJHB*>**)UnitySDK::FromName("", "LOKBAGIKJHB")->GetStaticField(0x2E400);
		}

		// static const ::System::Object FFKCHFAJCDL; // 0x0
		// static const ::System::Object BDDGFOPHBML; // 0x0
		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		// static const ::System::Object OFFNCJFJKLE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOKBAGIKJHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOKBAGIKJHB*))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOKBAGIKJHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOKBAGIKJHB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOKBAGIKJHB*>*(*)())((::PBYTE)hIl2Cpp + LOKBAGIKJHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOKBAGIKJHB* Clone()
		{
			return ((::LOKBAGIKJHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_CLONE_OFFSET))(this);
		}

		::System::UInt32 EPGHHDPDFFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_EPGHHDPDFFE_OFFSET))(this);
		}

		::System::Void HOFCCLFHKHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_HOFCCLFHKHP_OFFSET))(this, a1);
		}

		::System::Int64 OLEJNDFFHPP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_OLEJNDFFHPP_OFFSET))(this);
		}

		::System::Void KFFMBNFGJOB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_KFFMBNFGJOB_OFFSET))(this, a1);
		}

		::Google::Protobuf::ByteString* ANALOEDDDHD()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::UInt32 NEMKAPMKLKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_NEMKAPMKLKG_OFFSET))(this);
		}

		::System::Void MJBLGMNBAPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_MJBLGMNBAPK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOKBAGIKJHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOKBAGIKJHB*))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOKBAGIKJHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOKBAGIKJHB*))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOKBAGIKJHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
