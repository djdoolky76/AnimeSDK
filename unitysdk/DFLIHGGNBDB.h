#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFLIHGGNBDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFLIHGGNBDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1A5930)
#define DFLIHGGNBDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A5C00)
#define DFLIHGGNBDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1A5530)
#define DFLIHGGNBDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1A5500)
#define DFLIHGGNBDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A54F0)
#define DFLIHGGNBDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1A56F0)
#define DFLIHGGNBDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1A55E0)
#define DFLIHGGNBDB_GEPKEMCHIFI_OFFSET UNITYSDK_OFFSET(0x1E1A55B0)
#define DFLIHGGNBDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1A57C0)
#define DFLIHGGNBDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1A5480)
#define DFLIHGGNBDB_LFELHEMKLHL_OFFSET UNITYSDK_OFFSET(0x1E1A55D0)
#define DFLIHGGNBDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1A5A80)
#define DFLIHGGNBDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1A5A40)
#define DFLIHGGNBDB_MJEAFFLAJGK_OFFSET UNITYSDK_OFFSET(0x1E1A55A0)
#define DFLIHGGNBDB_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0x1E1A55C0)
#define DFLIHGGNBDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1A54E0)
#define DFLIHGGNBDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1A57F0)
#define DFLIHGGNBDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1A5850)

inline static constexpr unsigned int DFLIHGGNBDB_TypeDefinitionIndex = 28738;

	class DFLIHGGNBDB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EPNELBOCJJI; // 0x18
		::System::UInt32 BEPHHCNNJHD; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DFLIHGGNBDB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFLIHGGNBDB*>**)UnitySDK::FromName("", "DFLIHGGNBDB")->GetStaticField(0x32E80);
		}

		// static const ::System::Object BNFGHGOMCCB; // 0x0
		// static const ::System::Object MABJKJIHJIL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFLIHGGNBDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFLIHGGNBDB*))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFLIHGGNBDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFLIHGGNBDB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFLIHGGNBDB*>*(*)())((::PBYTE)hIl2Cpp + DFLIHGGNBDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFLIHGGNBDB* Clone()
		{
			return ((::DFLIHGGNBDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_CLONE_OFFSET))(this);
		}

		::System::UInt32 MJEAFFLAJGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_MJEAFFLAJGK_OFFSET))(this);
		}

		::System::Void GEPKEMCHIFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_GEPKEMCHIFI_OFFSET))(this, a1);
		}

		::System::UInt32 MMFEEJAHPLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_MMFEEJAHPLJ_OFFSET))(this);
		}

		::System::Void LFELHEMKLHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_LFELHEMKLHL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFLIHGGNBDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFLIHGGNBDB*))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFLIHGGNBDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFLIHGGNBDB*))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFLIHGGNBDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
