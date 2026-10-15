#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKNOCNDPAJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKNOCNDPAJA_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x1E48EE10)
#define GKNOCNDPAJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E48F180)
#define GKNOCNDPAJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48F550)
#define GKNOCNDPAJA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E48ED50)
#define GKNOCNDPAJA_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E48EDF0)
#define GKNOCNDPAJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E48ED10)
#define GKNOCNDPAJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48ED00)
#define GKNOCNDPAJA_DIJGBBMKBHJ_OFFSET UNITYSDK_OFFSET(0x1E48EDE0)
#define GKNOCNDPAJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E48EEB0)
#define GKNOCNDPAJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E48EE30)
#define GKNOCNDPAJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E48EF90)
#define GKNOCNDPAJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E48EC90)
#define GKNOCNDPAJA_KENPOJKHGJB_OFFSET UNITYSDK_OFFSET(0x1E48EDD0)
#define GKNOCNDPAJA_MDBICAHKDGN_OFFSET UNITYSDK_OFFSET(0x1E48EE20)
#define GKNOCNDPAJA_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E48EE00)
#define GKNOCNDPAJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E48F3B0)
#define GKNOCNDPAJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E48F360)
#define GKNOCNDPAJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E48ECF0)
#define GKNOCNDPAJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E48EFE0)
#define GKNOCNDPAJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E48F040)

inline static constexpr unsigned int GKNOCNDPAJA_TypeDefinitionIndex = 27048;

	class GKNOCNDPAJA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 FGEKJMADECN; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x20
		::System::UInt32 DIHAPDNPDHC; // 0x24
		static ::Google::Protobuf::MessageParser_1<::GKNOCNDPAJA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKNOCNDPAJA*>**)UnitySDK::FromName("", "GKNOCNDPAJA")->GetStaticField(0x1C560);
		}

		// static const ::System::Object DNDOBKCBHMK; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object IDOEGHDABLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKNOCNDPAJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKNOCNDPAJA*))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKNOCNDPAJA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKNOCNDPAJA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKNOCNDPAJA*>*(*)())((::PBYTE)hIl2Cpp + GKNOCNDPAJA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKNOCNDPAJA* Clone()
		{
			return ((::GKNOCNDPAJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_CLONE_OFFSET))(this);
		}

		::System::UInt64 KENPOJKHGJB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_KENPOJKHGJB_OFFSET))(this);
		}

		::System::Void DIJGBBMKBHJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_DIJGBBMKBHJ_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 ADAHCAJBNOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Void MDBICAHKDGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_MDBICAHKDGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKNOCNDPAJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKNOCNDPAJA*))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKNOCNDPAJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKNOCNDPAJA*))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKNOCNDPAJA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
