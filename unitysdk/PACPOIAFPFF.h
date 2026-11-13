#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAJEMNNNEBM;
class PACPOIAFPFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PACPOIAFPFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20371130)
#define PACPOIAFPFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x20371430)
#define PACPOIAFPFF_CLONE_OFFSET UNITYSDK_OFFSET(0x20370BC0)
#define PACPOIAFPFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20370B40)
#define PACPOIAFPFF_CTOR_OFFSET UNITYSDK_OFFSET(0x20370B30)
#define PACPOIAFPFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20370E10)
#define PACPOIAFPFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x20370C90)
#define PACPOIAFPFF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20370C80)
#define PACPOIAFPFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20370F90)
#define PACPOIAFPFF_IGCAEOGCAAB_OFFSET UNITYSDK_OFFSET(0x20370C60)
#define PACPOIAFPFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20370AF0)
#define PACPOIAFPFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203712A0)
#define PACPOIAFPFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20371200)
#define PACPOIAFPFF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20370C70)
#define PACPOIAFPFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20370B20)
#define PACPOIAFPFF_PEMJNFLOALD_OFFSET UNITYSDK_OFFSET(0x20370C50)
#define PACPOIAFPFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20370FF0)
#define PACPOIAFPFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x20371050)

inline static constexpr unsigned int PACPOIAFPFF_TypeDefinitionIndex = 30660;

	class PACPOIAFPFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EAJEMNNNEBM* HLFCNECGLBK; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PACPOIAFPFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PACPOIAFPFF*>**)UnitySDK::FromName("", "PACPOIAFPFF")->GetStaticField(0x2BDD0);
		}

		// static const ::System::Object DBPKONJHEJN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACPOIAFPFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PACPOIAFPFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PACPOIAFPFF*))((::PBYTE)hIl2Cpp + PACPOIAFPFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PACPOIAFPFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PACPOIAFPFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PACPOIAFPFF*>*(*)())((::PBYTE)hIl2Cpp + PACPOIAFPFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACPOIAFPFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PACPOIAFPFF* Clone()
		{
			return ((::PACPOIAFPFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACPOIAFPFF_CLONE_OFFSET))(this);
		}

		::EAJEMNNNEBM* PEMJNFLOALD()
		{
			return ((::EAJEMNNNEBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACPOIAFPFF_PEMJNFLOALD_OFFSET))(this);
		}

		::System::Void IGCAEOGCAAB(::EAJEMNNNEBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAJEMNNNEBM*))((::PBYTE)hIl2Cpp + PACPOIAFPFF_IGCAEOGCAAB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PACPOIAFPFF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PACPOIAFPFF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PACPOIAFPFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PACPOIAFPFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PACPOIAFPFF*))((::PBYTE)hIl2Cpp + PACPOIAFPFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PACPOIAFPFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACPOIAFPFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PACPOIAFPFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PACPOIAFPFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PACPOIAFPFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PACPOIAFPFF*))((::PBYTE)hIl2Cpp + PACPOIAFPFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PACPOIAFPFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
