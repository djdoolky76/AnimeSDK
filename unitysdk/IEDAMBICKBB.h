#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEDAMBICKBB_FMEHMGGKNPO.h"
#include "unitysdk/System/Object.h"
class IEDAMBICKBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEDAMBICKBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E635C10)
#define IEDAMBICKBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E635FB0)
#define IEDAMBICKBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E635710)
#define IEDAMBICKBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E635590)
#define IEDAMBICKBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E635580)
#define IEDAMBICKBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6357E0)
#define IEDAMBICKBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E635780)
#define IEDAMBICKBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6359F0)
#define IEDAMBICKBB_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0x1E635770)
#define IEDAMBICKBB_JBOLDKBELMP_OFFSET UNITYSDK_OFFSET(0x1E635660)
#define IEDAMBICKBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E635510)
#define IEDAMBICKBB_KAKIKFAEEEO_OFFSET UNITYSDK_OFFSET(0x1E6356E0)
#define IEDAMBICKBB_KFLDFIGDABN_OFFSET UNITYSDK_OFFSET(0x1E635760)
#define IEDAMBICKBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E635E30)
#define IEDAMBICKBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E635D70)
#define IEDAMBICKBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E635570)
#define IEDAMBICKBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E635AA0)
#define IEDAMBICKBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E635B00)

inline static constexpr unsigned int IEDAMBICKBB_TypeDefinitionIndex = 31761;

	class IEDAMBICKBB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* JEFEMOPFJOP; // 0x18
		::IEDAMBICKBB_FMEHMGGKNPO NPIBMNININN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IEDAMBICKBB")->GetStaticField(0x1C520);
		}

		// static const ::System::Object GEBBMPNOOFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDAMBICKBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEDAMBICKBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEDAMBICKBB*))((::PBYTE)hIl2Cpp + IEDAMBICKBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDAMBICKBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IEDAMBICKBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDAMBICKBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEDAMBICKBB* Clone()
		{
			return ((::IEDAMBICKBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDAMBICKBB_CLONE_OFFSET))(this);
		}

		::System::Int64 JBOLDKBELMP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDAMBICKBB_JBOLDKBELMP_OFFSET))(this);
		}

		::System::Void KAKIKFAEEEO(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IEDAMBICKBB_KAKIKFAEEEO_OFFSET))(this, a1);
		}

		::IEDAMBICKBB_FMEHMGGKNPO KFLDFIGDABN()
		{
			return ((::IEDAMBICKBB_FMEHMGGKNPO(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDAMBICKBB_KFLDFIGDABN_OFFSET))(this);
		}

		::System::Void GNCMNBHMIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDAMBICKBB_GNCMNBHMIPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEDAMBICKBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEDAMBICKBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEDAMBICKBB*))((::PBYTE)hIl2Cpp + IEDAMBICKBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDAMBICKBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDAMBICKBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEDAMBICKBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDAMBICKBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEDAMBICKBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEDAMBICKBB*))((::PBYTE)hIl2Cpp + IEDAMBICKBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEDAMBICKBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
