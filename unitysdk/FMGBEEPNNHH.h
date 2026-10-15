#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMGBEEPNNHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FMGBEEPNNHH_AKCGHIOECFE_OFFSET UNITYSDK_OFFSET(0x1E3B5870)
#define FMGBEEPNNHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3B5BA0)
#define FMGBEEPNNHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B5E70)
#define FMGBEEPNNHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3B57F0)
#define FMGBEEPNNHH_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E3B5840)
#define FMGBEEPNNHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3B57C0)
#define FMGBEEPNNHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B57B0)
#define FMGBEEPNNHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3B5960)
#define FMGBEEPNNHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3B5880)
#define FMGBEEPNNHH_FBMICLGHCBD_OFFSET UNITYSDK_OFFSET(0x1E3B5860)
#define FMGBEEPNNHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3B5A30)
#define FMGBEEPNNHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3B5770)
#define FMGBEEPNNHH_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E3B5850)
#define FMGBEEPNNHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3B5CF0)
#define FMGBEEPNNHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3B5CB0)
#define FMGBEEPNNHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3B57A0)
#define FMGBEEPNNHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3B5A60)
#define FMGBEEPNNHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3B5AC0)

inline static constexpr unsigned int FMGBEEPNNHH_TypeDefinitionIndex = 28171;

	class FMGBEEPNNHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 KHNMADKENHN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FMGBEEPNNHH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FMGBEEPNNHH*>**)UnitySDK::FromName("", "FMGBEEPNNHH")->GetStaticField(0x5CC00);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object CMDHAFJBKJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMGBEEPNNHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMGBEEPNNHH*))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMGBEEPNNHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FMGBEEPNNHH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FMGBEEPNNHH*>*(*)())((::PBYTE)hIl2Cpp + FMGBEEPNNHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMGBEEPNNHH* Clone()
		{
			return ((::FMGBEEPNNHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 FBMICLGHCBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_FBMICLGHCBD_OFFSET))(this);
		}

		::System::Void AKCGHIOECFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_AKCGHIOECFE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMGBEEPNNHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMGBEEPNNHH*))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMGBEEPNNHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMGBEEPNNHH*))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMGBEEPNNHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
