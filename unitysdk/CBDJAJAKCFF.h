#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBDJAJAKCFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBDJAJAKCFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F327910)
#define CBDJAJAKCFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F327B30)
#define CBDJAJAKCFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F327560)
#define CBDJAJAKCFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F327530)
#define CBDJAJAKCFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F327520)
#define CBDJAJAKCFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F327690)
#define CBDJAJAKCFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3275C0)
#define CBDJAJAKCFF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F3275B0)
#define CBDJAJAKCFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F327800)
#define CBDJAJAKCFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3274E0)
#define CBDJAJAKCFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3279D0)
#define CBDJAJAKCFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3279A0)
#define CBDJAJAKCFF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F3275A0)
#define CBDJAJAKCFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F327510)
#define CBDJAJAKCFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F327830)
#define CBDJAJAKCFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F327890)

inline static constexpr unsigned int CBDJAJAKCFF_TypeDefinitionIndex = 29388;

	class CBDJAJAKCFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CBDJAJAKCFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBDJAJAKCFF*>**)UnitySDK::FromName("", "CBDJAJAKCFF")->GetStaticField(0x59210);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBDJAJAKCFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBDJAJAKCFF*))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBDJAJAKCFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBDJAJAKCFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBDJAJAKCFF*>*(*)())((::PBYTE)hIl2Cpp + CBDJAJAKCFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBDJAJAKCFF* Clone()
		{
			return ((::CBDJAJAKCFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBDJAJAKCFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBDJAJAKCFF*))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBDJAJAKCFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBDJAJAKCFF*))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBDJAJAKCFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
