#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COPLCPBANMD;
class PHDFGLFGPOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHDFGLFGPOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF0AB90)
#define PHDFGLFGPOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0AE30)
#define PHDFGLFGPOL_CLEFHLPEMKJ_OFFSET UNITYSDK_OFFSET(0x1DF0A5B0)
#define PHDFGLFGPOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF0A520)
#define PHDFGLFGPOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF0A4B0)
#define PHDFGLFGPOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0A4A0)
#define PHDFGLFGPOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF0A730)
#define PHDFGLFGPOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF0A5C0)
#define PHDFGLFGPOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF0AA00)
#define PHDFGLFGPOL_JDKPFHDHBBH_OFFSET UNITYSDK_OFFSET(0x1DF0A5A0)
#define PHDFGLFGPOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF0A460)
#define PHDFGLFGPOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF0AC80)
#define PHDFGLFGPOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF0ABF0)
#define PHDFGLFGPOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF0A490)
#define PHDFGLFGPOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF0AAA0)
#define PHDFGLFGPOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF0AB00)

inline static constexpr unsigned int PHDFGLFGPOL_TypeDefinitionIndex = 31560;

	class PHDFGLFGPOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::COPLCPBANMD* CODPEOICCHG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PHDFGLFGPOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PHDFGLFGPOL*>**)UnitySDK::FromName("", "PHDFGLFGPOL")->GetStaticField(0x33680);
		}

		// static const ::System::Object GLDEHFLBLMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHDFGLFGPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHDFGLFGPOL*))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHDFGLFGPOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PHDFGLFGPOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PHDFGLFGPOL*>*(*)())((::PBYTE)hIl2Cpp + PHDFGLFGPOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHDFGLFGPOL* Clone()
		{
			return ((::PHDFGLFGPOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_CLONE_OFFSET))(this);
		}

		::COPLCPBANMD* JDKPFHDHBBH()
		{
			return ((::COPLCPBANMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_JDKPFHDHBBH_OFFSET))(this);
		}

		::System::Void CLEFHLPEMKJ(::COPLCPBANMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COPLCPBANMD*))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_CLEFHLPEMKJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHDFGLFGPOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHDFGLFGPOL*))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHDFGLFGPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHDFGLFGPOL*))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHDFGLFGPOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
