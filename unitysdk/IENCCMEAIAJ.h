#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IENCCMEAIAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IENCCMEAIAJ_AEOLLAKHLGK_OFFSET UNITYSDK_OFFSET(0x1E6121E0)
#define IENCCMEAIAJ_BMEAMKMEBMF_OFFSET UNITYSDK_OFFSET(0x1E6121F0)
#define IENCCMEAIAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E612580)
#define IENCCMEAIAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6127A0)
#define IENCCMEAIAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E612170)
#define IENCCMEAIAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E612140)
#define IENCCMEAIAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E612130)
#define IENCCMEAIAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E612300)
#define IENCCMEAIAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E612200)
#define IENCCMEAIAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E612470)
#define IENCCMEAIAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6120C0)
#define IENCCMEAIAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E612640)
#define IENCCMEAIAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E612610)
#define IENCCMEAIAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E612120)
#define IENCCMEAIAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6124A0)
#define IENCCMEAIAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E612500)

inline static constexpr unsigned int IENCCMEAIAJ_TypeDefinitionIndex = 28934;

	class IENCCMEAIAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BLCOOMJICJC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IENCCMEAIAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IENCCMEAIAJ*>**)UnitySDK::FromName("", "IENCCMEAIAJ")->GetStaticField(0x48E20);
		}

		// static const ::System::Object HMILGJNJNCE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IENCCMEAIAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IENCCMEAIAJ*))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IENCCMEAIAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IENCCMEAIAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IENCCMEAIAJ*>*(*)())((::PBYTE)hIl2Cpp + IENCCMEAIAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IENCCMEAIAJ* Clone()
		{
			return ((::IENCCMEAIAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 AEOLLAKHLGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_AEOLLAKHLGK_OFFSET))(this);
		}

		::System::Void BMEAMKMEBMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_BMEAMKMEBMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IENCCMEAIAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IENCCMEAIAJ*))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IENCCMEAIAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IENCCMEAIAJ*))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IENCCMEAIAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
