#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPDDOMFGIMK;
class MIAFPKGAMOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MIAFPKGAMOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA62E20)
#define MIAFPKGAMOM_CBKINCJHPBP_OFFSET UNITYSDK_OFFSET(0x1FA62880)
#define MIAFPKGAMOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA63080)
#define MIAFPKGAMOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA627F0)
#define MIAFPKGAMOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA62770)
#define MIAFPKGAMOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA62760)
#define MIAFPKGAMOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA62A00)
#define MIAFPKGAMOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA62890)
#define MIAFPKGAMOM_FJFACFAFJKN_OFFSET UNITYSDK_OFFSET(0x1FA62870)
#define MIAFPKGAMOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA62CD0)
#define MIAFPKGAMOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA62720)
#define MIAFPKGAMOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA62F00)
#define MIAFPKGAMOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA62E80)
#define MIAFPKGAMOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA62750)
#define MIAFPKGAMOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA62D30)
#define MIAFPKGAMOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA62D90)

inline static constexpr unsigned int MIAFPKGAMOM_TypeDefinitionIndex = 27982;

	class MIAFPKGAMOM : public ::System::Object
	{
	public:
		::EPDDOMFGIMK* MBKKBLDLMFO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MIAFPKGAMOM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MIAFPKGAMOM*>**)UnitySDK::FromName("", "MIAFPKGAMOM")->GetStaticField(0x49D70);
		}

		// static const ::System::Object LFDCOAFCHFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MIAFPKGAMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIAFPKGAMOM*))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIAFPKGAMOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MIAFPKGAMOM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MIAFPKGAMOM*>*(*)())((::PBYTE)hIl2Cpp + MIAFPKGAMOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MIAFPKGAMOM* Clone()
		{
			return ((::MIAFPKGAMOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_CLONE_OFFSET))(this);
		}

		::EPDDOMFGIMK* FJFACFAFJKN()
		{
			return ((::EPDDOMFGIMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_FJFACFAFJKN_OFFSET))(this);
		}

		::System::Void CBKINCJHPBP(::EPDDOMFGIMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPDDOMFGIMK*))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_CBKINCJHPBP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MIAFPKGAMOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MIAFPKGAMOM*))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MIAFPKGAMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIAFPKGAMOM*))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIAFPKGAMOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
