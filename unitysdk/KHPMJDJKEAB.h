#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCDHBIEAFDE;
class KHPMJDJKEAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHPMJDJKEAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8232A0)
#define KHPMJDJKEAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E823640)
#define KHPMJDJKEAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E822C60)
#define KHPMJDJKEAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E822BD0)
#define KHPMJDJKEAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E822BC0)
#define KHPMJDJKEAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E822E90)
#define KHPMJDJKEAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E822D20)
#define KHPMJDJKEAB_FLPDELEDIBK_OFFSET UNITYSDK_OFFSET(0x1E822D10)
#define KHPMJDJKEAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E823160)
#define KHPMJDJKEAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E822B80)
#define KHPMJDJKEAB_LHJEMKJFLJK_OFFSET UNITYSDK_OFFSET(0x1E822D00)
#define KHPMJDJKEAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E823420)
#define KHPMJDJKEAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E823300)
#define KHPMJDJKEAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E822BB0)
#define KHPMJDJKEAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8231B0)
#define KHPMJDJKEAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E823210)

inline static constexpr unsigned int KHPMJDJKEAB_TypeDefinitionIndex = 32585;

	class KHPMJDJKEAB : public ::System::Object
	{
	public:
		::KCDHBIEAFDE* MGBEADJIBJM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KHPMJDJKEAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHPMJDJKEAB*>**)UnitySDK::FromName("", "KHPMJDJKEAB")->GetStaticField(0x16FA0);
		}

		// static const ::System::Object JMEOLDPADHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHPMJDJKEAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPMJDJKEAB*))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHPMJDJKEAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHPMJDJKEAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHPMJDJKEAB*>*(*)())((::PBYTE)hIl2Cpp + KHPMJDJKEAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHPMJDJKEAB* Clone()
		{
			return ((::KHPMJDJKEAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_CLONE_OFFSET))(this);
		}

		::KCDHBIEAFDE* LHJEMKJFLJK()
		{
			return ((::KCDHBIEAFDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_LHJEMKJFLJK_OFFSET))(this);
		}

		::System::Void FLPDELEDIBK(::KCDHBIEAFDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCDHBIEAFDE*))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_FLPDELEDIBK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHPMJDJKEAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPMJDJKEAB*))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHPMJDJKEAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPMJDJKEAB*))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHPMJDJKEAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
