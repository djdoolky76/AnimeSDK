#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPLNOGAJHKC;
class KLJLJCICPFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPLNOGAJHKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5CFD10)
#define HPLNOGAJHKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CFF80)
#define HPLNOGAJHKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5CF6D0)
#define HPLNOGAJHKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5CF650)
#define HPLNOGAJHKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CF640)
#define HPLNOGAJHKC_DOGGADIPNCD_OFFSET UNITYSDK_OFFSET(0x1E5CF760)
#define HPLNOGAJHKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5CF8F0)
#define HPLNOGAJHKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5CF780)
#define HPLNOGAJHKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5CFBC0)
#define HPLNOGAJHKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5CF600)
#define HPLNOGAJHKC_LBKEDBMFPKB_OFFSET UNITYSDK_OFFSET(0x1E5CF770)
#define HPLNOGAJHKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5CFE00)
#define HPLNOGAJHKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5CFD70)
#define HPLNOGAJHKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5CF630)
#define HPLNOGAJHKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5CFC20)
#define HPLNOGAJHKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5CFC80)

inline static constexpr unsigned int HPLNOGAJHKC_TypeDefinitionIndex = 25469;

	class HPLNOGAJHKC : public ::System::Object
	{
	public:
		::KLJLJCICPFF* NOHFFBHAHFM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HPLNOGAJHKC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPLNOGAJHKC*>**)UnitySDK::FromName("", "HPLNOGAJHKC")->GetStaticField(0x3F900);
		}

		// static const ::System::Object DMOGHJDAKFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPLNOGAJHKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPLNOGAJHKC*))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPLNOGAJHKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPLNOGAJHKC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPLNOGAJHKC*>*(*)())((::PBYTE)hIl2Cpp + HPLNOGAJHKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPLNOGAJHKC* Clone()
		{
			return ((::HPLNOGAJHKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_CLONE_OFFSET))(this);
		}

		::KLJLJCICPFF* DOGGADIPNCD()
		{
			return ((::KLJLJCICPFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_DOGGADIPNCD_OFFSET))(this);
		}

		::System::Void LBKEDBMFPKB(::KLJLJCICPFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJLJCICPFF*))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_LBKEDBMFPKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPLNOGAJHKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPLNOGAJHKC*))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPLNOGAJHKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPLNOGAJHKC*))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPLNOGAJHKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
