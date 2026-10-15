#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGPPDMIPDDH.h"
#include "unitysdk/System/Object.h"
class DJBJMHKMOMB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJBJMHKMOMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E198950)
#define DJBJMHKMOMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E198C60)
#define DJBJMHKMOMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E198540)
#define DJBJMHKMOMB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E1985B0)
#define DJBJMHKMOMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E198510)
#define DJBJMHKMOMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E198500)
#define DJBJMHKMOMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E198700)
#define DJBJMHKMOMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1985F0)
#define DJBJMHKMOMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1987D0)
#define DJBJMHKMOMB_HPBAFHNDIFO_OFFSET UNITYSDK_OFFSET(0x1E1985E0)
#define DJBJMHKMOMB_IJKCEKJCMII_OFFSET UNITYSDK_OFFSET(0x1E1985D0)
#define DJBJMHKMOMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E198490)
#define DJBJMHKMOMB_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E1985C0)
#define DJBJMHKMOMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E198AE0)
#define DJBJMHKMOMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E198AA0)
#define DJBJMHKMOMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1984F0)
#define DJBJMHKMOMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E198800)
#define DJBJMHKMOMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E198860)

inline static constexpr unsigned int DJBJMHKMOMB_TypeDefinitionIndex = 34873;

	class DJBJMHKMOMB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BGPPDMIPDDH IPNMEBCHFFE; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DJBJMHKMOMB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DJBJMHKMOMB*>**)UnitySDK::FromName("", "DJBJMHKMOMB")->GetStaticField(0x17D30);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object JCANJOOHFDC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJBJMHKMOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJBJMHKMOMB*))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJBJMHKMOMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DJBJMHKMOMB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DJBJMHKMOMB*>*(*)())((::PBYTE)hIl2Cpp + DJBJMHKMOMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJBJMHKMOMB* Clone()
		{
			return ((::DJBJMHKMOMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::BGPPDMIPDDH IJKCEKJCMII()
		{
			return ((::BGPPDMIPDDH(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_IJKCEKJCMII_OFFSET))(this);
		}

		::System::Void HPBAFHNDIFO(::BGPPDMIPDDH a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGPPDMIPDDH))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_HPBAFHNDIFO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJBJMHKMOMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJBJMHKMOMB*))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJBJMHKMOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJBJMHKMOMB*))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJBJMHKMOMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
