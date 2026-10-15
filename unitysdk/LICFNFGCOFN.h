#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEBIONMOIAG.h"
#include "unitysdk/System/Object.h"
class LICFNFGCOFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LICFNFGCOFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E96ACB0)
#define LICFNFGCOFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96AF10)
#define LICFNFGCOFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E96A8E0)
#define LICFNFGCOFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96A8B0)
#define LICFNFGCOFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96A8A0)
#define LICFNFGCOFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E96AA10)
#define LICFNFGCOFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E96A940)
#define LICFNFGCOFN_FKLHAKNNIJN_OFFSET UNITYSDK_OFFSET(0x1E96A930)
#define LICFNFGCOFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E96AB80)
#define LICFNFGCOFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E96A860)
#define LICFNFGCOFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E96ADB0)
#define LICFNFGCOFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E96AD80)
#define LICFNFGCOFN_MPHNMOGNEHL_OFFSET UNITYSDK_OFFSET(0x1E96A920)
#define LICFNFGCOFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E96A890)
#define LICFNFGCOFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E96ABB0)
#define LICFNFGCOFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E96AC10)

inline static constexpr unsigned int LICFNFGCOFN_TypeDefinitionIndex = 32064;

	class LICFNFGCOFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JEBIONMOIAG MJANJHJIDLG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LICFNFGCOFN")->GetStaticField(0x44A30);
		}

		// static const ::System::Object DNJOOPFPAKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICFNFGCOFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LICFNFGCOFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LICFNFGCOFN*))((::PBYTE)hIl2Cpp + LICFNFGCOFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LICFNFGCOFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LICFNFGCOFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICFNFGCOFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LICFNFGCOFN* Clone()
		{
			return ((::LICFNFGCOFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICFNFGCOFN_CLONE_OFFSET))(this);
		}

		::JEBIONMOIAG MPHNMOGNEHL()
		{
			return ((::JEBIONMOIAG(*)(::PVOID))((::PBYTE)hIl2Cpp + LICFNFGCOFN_MPHNMOGNEHL_OFFSET))(this);
		}

		::System::Void FKLHAKNNIJN(::JEBIONMOIAG a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEBIONMOIAG))((::PBYTE)hIl2Cpp + LICFNFGCOFN_FKLHAKNNIJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LICFNFGCOFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LICFNFGCOFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LICFNFGCOFN*))((::PBYTE)hIl2Cpp + LICFNFGCOFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LICFNFGCOFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICFNFGCOFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LICFNFGCOFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LICFNFGCOFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LICFNFGCOFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LICFNFGCOFN*))((::PBYTE)hIl2Cpp + LICFNFGCOFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LICFNFGCOFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
