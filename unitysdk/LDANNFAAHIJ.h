#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDANNFAAHIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDANNFAAHIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC2F540)
#define LDANNFAAHIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2F810)
#define LDANNFAAHIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC2F190)
#define LDANNFAAHIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC2F160)
#define LDANNFAAHIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2F150)
#define LDANNFAAHIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC2F300)
#define LDANNFAAHIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC2F220)
#define LDANNFAAHIJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FC2F210)
#define LDANNFAAHIJ_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1FC2F1E0)
#define LDANNFAAHIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC2F3D0)
#define LDANNFAAHIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC2F110)
#define LDANNFAAHIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC2F690)
#define LDANNFAAHIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC2F650)
#define LDANNFAAHIJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FC2F200)
#define LDANNFAAHIJ_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1FC2F1F0)
#define LDANNFAAHIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC2F140)
#define LDANNFAAHIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC2F400)
#define LDANNFAAHIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC2F460)

inline static constexpr unsigned int LDANNFAAHIJ_TypeDefinitionIndex = 27761;

	class LDANNFAAHIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LDANNFAAHIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDANNFAAHIJ*>**)UnitySDK::FromName("", "LDANNFAAHIJ")->GetStaticField(0x29200);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDANNFAAHIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDANNFAAHIJ*))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDANNFAAHIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDANNFAAHIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDANNFAAHIJ*>*(*)())((::PBYTE)hIl2Cpp + LDANNFAAHIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDANNFAAHIJ* Clone()
		{
			return ((::LDANNFAAHIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDANNFAAHIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDANNFAAHIJ*))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDANNFAAHIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDANNFAAHIJ*))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDANNFAAHIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
