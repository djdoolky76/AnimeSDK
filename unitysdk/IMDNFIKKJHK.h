#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMDNFIKKJHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMDNFIKKJHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B5730)
#define IMDNFIKKJHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B5AC0)
#define IMDNFIKKJHK_CKNMJPOOLCN_OFFSET UNITYSDK_OFFSET(0x1E6B53F0)
#define IMDNFIKKJHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B5340)
#define IMDNFIKKJHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B5300)
#define IMDNFIKKJHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B52F0)
#define IMDNFIKKJHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B54A0)
#define IMDNFIKKJHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B5420)
#define IMDNFIKKJHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B5570)
#define IMDNFIKKJHK_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1E6B5410)
#define IMDNFIKKJHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B5280)
#define IMDNFIKKJHK_JLODNLHKNJL_OFFSET UNITYSDK_OFFSET(0x1E6B53E0)
#define IMDNFIKKJHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B5910)
#define IMDNFIKKJHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B58C0)
#define IMDNFIKKJHK_PBBBCFCOJFN_OFFSET UNITYSDK_OFFSET(0x1E6B53D0)
#define IMDNFIKKJHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B52E0)
#define IMDNFIKKJHK_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1E6B5400)
#define IMDNFIKKJHK_PNCKKMFFIAN_OFFSET UNITYSDK_OFFSET(0x1E6B53C0)
#define IMDNFIKKJHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B55A0)
#define IMDNFIKKJHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B5600)

inline static constexpr unsigned int IMDNFIKKJHK_TypeDefinitionIndex = 25138;

	class IMDNFIKKJHK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KKMBEBBLHEL; // 0x18
		::System::UInt32 PHGOGHEFEKB; // 0x1C
		::System::UInt32 BCLKCLDFMOA; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IMDNFIKKJHK")->GetStaticField(0x48E80);
		}

		// static const ::System::Object AHHJCDPEOPD; // 0x0
		// static const ::System::Object MLJAJPICBMI; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMDNFIKKJHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMDNFIKKJHK*))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMDNFIKKJHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IMDNFIKKJHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMDNFIKKJHK* Clone()
		{
			return ((::IMDNFIKKJHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_CLONE_OFFSET))(this);
		}

		::System::UInt32 PNCKKMFFIAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_PNCKKMFFIAN_OFFSET))(this);
		}

		::System::Void PBBBCFCOJFN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_PBBBCFCOJFN_OFFSET))(this, a1);
		}

		::System::UInt32 JLODNLHKNJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_JLODNLHKNJL_OFFSET))(this);
		}

		::System::Void CKNMJPOOLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_CKNMJPOOLCN_OFFSET))(this, a1);
		}

		::System::UInt32 PJLEOJKPGAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMDNFIKKJHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMDNFIKKJHK*))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMDNFIKKJHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMDNFIKKJHK*))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMDNFIKKJHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
