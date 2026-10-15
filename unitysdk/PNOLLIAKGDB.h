#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNOLLIAKGDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNOLLIAKGDB_AOGGPKGOHOL_OFFSET UNITYSDK_OFFSET(0x1DFC0990)
#define PNOLLIAKGDB_BMPJOLMCFMC_OFFSET UNITYSDK_OFFSET(0x1DFC09A0)
#define PNOLLIAKGDB_BPEJPHPKCAA_OFFSET UNITYSDK_OFFSET(0x1DFC09C0)
#define PNOLLIAKGDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFC0DF0)
#define PNOLLIAKGDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC1090)
#define PNOLLIAKGDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFC0920)
#define PNOLLIAKGDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFC08E0)
#define PNOLLIAKGDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC08D0)
#define PNOLLIAKGDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFC0AD0)
#define PNOLLIAKGDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFC09D0)
#define PNOLLIAKGDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFC0BC0)
#define PNOLLIAKGDB_HDNAINJKKON_OFFSET UNITYSDK_OFFSET(0x1DFC09B0)
#define PNOLLIAKGDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFC0890)
#define PNOLLIAKGDB_KAPBBIBKJIH_OFFSET UNITYSDK_OFFSET(0x1DFC0980)
#define PNOLLIAKGDB_KJKEIDIKHEB_OFFSET UNITYSDK_OFFSET(0x1DFC0970)
#define PNOLLIAKGDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFC0EF0)
#define PNOLLIAKGDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFC0EA0)
#define PNOLLIAKGDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFC08C0)
#define PNOLLIAKGDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFC0BF0)
#define PNOLLIAKGDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFC0C50)

inline static constexpr unsigned int PNOLLIAKGDB_TypeDefinitionIndex = 32032;

	class PNOLLIAKGDB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BLGGGPJNLIL; // 0x18
		::System::Boolean HOJEIIKJOBO; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 EAMKDMMIJAP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PNOLLIAKGDB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNOLLIAKGDB*>**)UnitySDK::FromName("", "PNOLLIAKGDB")->GetStaticField(0x52340);
		}

		// static const ::System::Object BHMABAMGPOO; // 0x0
		// static const ::System::Object JOGMGLIFKPD; // 0x0
		// static const ::System::Object DHBLAFBFKCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNOLLIAKGDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNOLLIAKGDB*))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOLLIAKGDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PNOLLIAKGDB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNOLLIAKGDB*>*(*)())((::PBYTE)hIl2Cpp + PNOLLIAKGDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNOLLIAKGDB* Clone()
		{
			return ((::PNOLLIAKGDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_CLONE_OFFSET))(this);
		}

		::System::Boolean KJKEIDIKHEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_KJKEIDIKHEB_OFFSET))(this);
		}

		::System::Void KAPBBIBKJIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_KAPBBIBKJIH_OFFSET))(this, a1);
		}

		::System::UInt32 AOGGPKGOHOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_AOGGPKGOHOL_OFFSET))(this);
		}

		::System::Void BMPJOLMCFMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_BMPJOLMCFMC_OFFSET))(this, a1);
		}

		::System::Boolean HDNAINJKKON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_HDNAINJKKON_OFFSET))(this);
		}

		::System::Void BPEJPHPKCAA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_BPEJPHPKCAA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNOLLIAKGDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNOLLIAKGDB*))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNOLLIAKGDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNOLLIAKGDB*))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNOLLIAKGDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
