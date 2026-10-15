#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJCBIAEMLDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJCBIAEMLDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9770A0)
#define LJCBIAEMLDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9772C0)
#define LJCBIAEMLDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E976CF0)
#define LJCBIAEMLDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E976CC0)
#define LJCBIAEMLDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E976CB0)
#define LJCBIAEMLDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E976E20)
#define LJCBIAEMLDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E976D50)
#define LJCBIAEMLDN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E976D40)
#define LJCBIAEMLDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E976F90)
#define LJCBIAEMLDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E976C70)
#define LJCBIAEMLDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E977160)
#define LJCBIAEMLDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E977130)
#define LJCBIAEMLDN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E976D30)
#define LJCBIAEMLDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E976CA0)
#define LJCBIAEMLDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E976FC0)
#define LJCBIAEMLDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E977020)

inline static constexpr unsigned int LJCBIAEMLDN_TypeDefinitionIndex = 30334;

	class LJCBIAEMLDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LJCBIAEMLDN")->GetStaticField(0x46520);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJCBIAEMLDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJCBIAEMLDN*))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJCBIAEMLDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LJCBIAEMLDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJCBIAEMLDN* Clone()
		{
			return ((::LJCBIAEMLDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJCBIAEMLDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJCBIAEMLDN*))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJCBIAEMLDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJCBIAEMLDN*))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJCBIAEMLDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
