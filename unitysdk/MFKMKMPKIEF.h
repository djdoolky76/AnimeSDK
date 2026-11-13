#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFKMKMPKIEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MFKMKMPKIEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB180D0)
#define MFKMKMPKIEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB184B0)
#define MFKMKMPKIEF_CIOGIFBGEIF_OFFSET UNITYSDK_OFFSET(0x1FB17CC0)
#define MFKMKMPKIEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB17C70)
#define MFKMKMPKIEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB17C30)
#define MFKMKMPKIEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB17C20)
#define MFKMKMPKIEF_DFKFKOGAGHL_OFFSET UNITYSDK_OFFSET(0x1FB17CD0)
#define MFKMKMPKIEF_EDFDONCOJEF_OFFSET UNITYSDK_OFFSET(0x1FB17CF0)
#define MFKMKMPKIEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB17E00)
#define MFKMKMPKIEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB17D20)
#define MFKMKMPKIEF_GCMNAFEEDOB_OFFSET UNITYSDK_OFFSET(0x1FB17D10)
#define MFKMKMPKIEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB17EE0)
#define MFKMKMPKIEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB17BE0)
#define MFKMKMPKIEF_LCAGJNIBOLN_OFFSET UNITYSDK_OFFSET(0x1FB17CE0)
#define MFKMKMPKIEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB18300)
#define MFKMKMPKIEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB182B0)
#define MFKMKMPKIEF_NKLMJHMJCEB_OFFSET UNITYSDK_OFFSET(0x1FB17D00)
#define MFKMKMPKIEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB17C10)
#define MFKMKMPKIEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB17F30)
#define MFKMKMPKIEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB17F90)

inline static constexpr unsigned int MFKMKMPKIEF_TypeDefinitionIndex = 27168;

	class MFKMKMPKIEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 HOPAGPIGKBP; // 0x18
		::System::UInt32 KOGFKAFJNPB; // 0x20
		::System::UInt32 MHHNPOJHJLB; // 0x24
		static ::Google::Protobuf::MessageParser_1<::MFKMKMPKIEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MFKMKMPKIEF*>**)UnitySDK::FromName("", "MFKMKMPKIEF")->GetStaticField(0x4FF00);
		}

		// static const ::System::Object OPCMCGBECKA; // 0x0
		// static const ::System::Object NPLLNGCEGLA; // 0x0
		// static const ::System::Object PPBAGFBKGBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFKMKMPKIEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFKMKMPKIEF*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MFKMKMPKIEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MFKMKMPKIEF*>*(*)())((::PBYTE)hIl2Cpp + MFKMKMPKIEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFKMKMPKIEF* Clone()
		{
			return ((::MFKMKMPKIEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CLONE_OFFSET))(this);
		}

		::System::UInt64 CIOGIFBGEIF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CIOGIFBGEIF_OFFSET))(this);
		}

		::System::Void DFKFKOGAGHL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_DFKFKOGAGHL_OFFSET))(this, a1);
		}

		::System::UInt32 LCAGJNIBOLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_LCAGJNIBOLN_OFFSET))(this);
		}

		::System::Void EDFDONCOJEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_EDFDONCOJEF_OFFSET))(this, a1);
		}

		::System::UInt32 NKLMJHMJCEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_NKLMJHMJCEB_OFFSET))(this);
		}

		::System::Void GCMNAFEEDOB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_GCMNAFEEDOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFKMKMPKIEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFKMKMPKIEF*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFKMKMPKIEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFKMKMPKIEF*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFKMKMPKIEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
