#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKOGDPGHEKL;
class PNEGDOHOLDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LKOGDPGHEKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9944E0)
#define LKOGDPGHEKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E994730)
#define LKOGDPGHEKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E993EC0)
#define LKOGDPGHEKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E993E50)
#define LKOGDPGHEKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E993E40)
#define LKOGDPGHEKL_DGKOPKCAACE_OFFSET UNITYSDK_OFFSET(0x1E993F50)
#define LKOGDPGHEKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9940D0)
#define LKOGDPGHEKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E993F60)
#define LKOGDPGHEKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9943A0)
#define LKOGDPGHEKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E993E00)
#define LKOGDPGHEKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9945B0)
#define LKOGDPGHEKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E994540)
#define LKOGDPGHEKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E993E30)
#define LKOGDPGHEKL_PGKPEBCMDAC_OFFSET UNITYSDK_OFFSET(0x1E993F40)
#define LKOGDPGHEKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9943F0)
#define LKOGDPGHEKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E994450)

inline static constexpr unsigned int LKOGDPGHEKL_TypeDefinitionIndex = 31297;

	class LKOGDPGHEKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PNEGDOHOLDN* NJGLELHFILA; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LKOGDPGHEKL")->GetStaticField(0x4AE70);
		}

		// static const ::System::Object FHAECLEFMHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LKOGDPGHEKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKOGDPGHEKL*))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKOGDPGHEKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LKOGDPGHEKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LKOGDPGHEKL* Clone()
		{
			return ((::LKOGDPGHEKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_CLONE_OFFSET))(this);
		}

		::PNEGDOHOLDN* PGKPEBCMDAC()
		{
			return ((::PNEGDOHOLDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_PGKPEBCMDAC_OFFSET))(this);
		}

		::System::Void DGKOPKCAACE(::PNEGDOHOLDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNEGDOHOLDN*))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_DGKOPKCAACE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LKOGDPGHEKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKOGDPGHEKL*))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LKOGDPGHEKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKOGDPGHEKL*))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LKOGDPGHEKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
