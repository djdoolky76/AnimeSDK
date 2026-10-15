#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMFDLPNOGOH.h"
#include "unitysdk/System/Object.h"
class MMPPKFJEOGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMPPKFJEOGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA90650)
#define MMPPKFJEOGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA908B0)
#define MMPPKFJEOGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA90220)
#define MMPPKFJEOGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA901F0)
#define MMPPKFJEOGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA901E0)
#define MMPPKFJEOGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA903B0)
#define MMPPKFJEOGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA902B0)
#define MMPPKFJEOGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA90520)
#define MMPPKFJEOGK_GOIMIKBPKHK_OFFSET UNITYSDK_OFFSET(0x1EA902A0)
#define MMPPKFJEOGK_HJHIAFIHHOL_OFFSET UNITYSDK_OFFSET(0x1EA90290)
#define MMPPKFJEOGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA90170)
#define MMPPKFJEOGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA90750)
#define MMPPKFJEOGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA90720)
#define MMPPKFJEOGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA901D0)
#define MMPPKFJEOGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA90550)
#define MMPPKFJEOGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA905B0)

	class MMPPKFJEOGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EMFDLPNOGOH JILBEPKHINJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MMPPKFJEOGK")->GetStaticField(0x59430);
		}

		// static const ::System::Object AAGFFKJIINK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMPPKFJEOGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMPPKFJEOGK*))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMPPKFJEOGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MMPPKFJEOGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMPPKFJEOGK* Clone()
		{
			return ((::MMPPKFJEOGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_CLONE_OFFSET))(this);
		}

		::EMFDLPNOGOH HJHIAFIHHOL()
		{
			return ((::EMFDLPNOGOH(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_HJHIAFIHHOL_OFFSET))(this);
		}

		::System::Void GOIMIKBPKHK(::EMFDLPNOGOH a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMFDLPNOGOH))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_GOIMIKBPKHK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMPPKFJEOGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMPPKFJEOGK*))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMPPKFJEOGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMPPKFJEOGK*))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMPPKFJEOGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
