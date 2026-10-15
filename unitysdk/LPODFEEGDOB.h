#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPODFEEGDOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPODFEEGDOB_AFOGPKEACOE_OFFSET UNITYSDK_OFFSET(0x1E9D4460)
#define LPODFEEGDOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D47E0)
#define LPODFEEGDOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D4AB0)
#define LPODFEEGDOB_CDEALCAILII_OFFSET UNITYSDK_OFFSET(0x1E9D4480)
#define LPODFEEGDOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D43E0)
#define LPODFEEGDOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D43B0)
#define LPODFEEGDOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D43A0)
#define LPODFEEGDOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D45A0)
#define LPODFEEGDOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D4490)
#define LPODFEEGDOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D4670)
#define LPODFEEGDOB_IOPJOBFPGHM_OFFSET UNITYSDK_OFFSET(0x1E9D4450)
#define LPODFEEGDOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D4330)
#define LPODFEEGDOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D4930)
#define LPODFEEGDOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D48F0)
#define LPODFEEGDOB_NLKPDIMGMFB_OFFSET UNITYSDK_OFFSET(0x1E9D4470)
#define LPODFEEGDOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D4390)
#define LPODFEEGDOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D46A0)
#define LPODFEEGDOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D4700)

	class LPODFEEGDOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CJNJFFAHNPH; // 0x18
		::System::UInt32 HCPLAJGMFFG; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LPODFEEGDOB")->GetStaticField(0x42500);
		}

		// static const ::System::Object NEPMEADCIFH; // 0x0
		// static const ::System::Object JOFLJEMIOEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODFEEGDOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPODFEEGDOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPODFEEGDOB*))((::PBYTE)hIl2Cpp + LPODFEEGDOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPODFEEGDOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LPODFEEGDOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODFEEGDOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPODFEEGDOB* Clone()
		{
			return ((::LPODFEEGDOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODFEEGDOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 IOPJOBFPGHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODFEEGDOB_IOPJOBFPGHM_OFFSET))(this);
		}

		::System::Void AFOGPKEACOE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPODFEEGDOB_AFOGPKEACOE_OFFSET))(this, a1);
		}

		::System::UInt32 NLKPDIMGMFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODFEEGDOB_NLKPDIMGMFB_OFFSET))(this);
		}

		::System::Void CDEALCAILII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPODFEEGDOB_CDEALCAILII_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPODFEEGDOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPODFEEGDOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPODFEEGDOB*))((::PBYTE)hIl2Cpp + LPODFEEGDOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODFEEGDOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODFEEGDOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPODFEEGDOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODFEEGDOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPODFEEGDOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPODFEEGDOB*))((::PBYTE)hIl2Cpp + LPODFEEGDOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPODFEEGDOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
