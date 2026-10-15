#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKNBLADLAAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKNBLADLAAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B5E40)
#define HKNBLADLAAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B61C0)
#define HKNBLADLAAE_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1E5B5B00)
#define HKNBLADLAAE_CHEPFLDNHBB_OFFSET UNITYSDK_OFFSET(0x1E5B5B20)
#define HKNBLADLAAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B5A50)
#define HKNBLADLAAE_CNIEBCOEJOL_OFFSET UNITYSDK_OFFSET(0x1E5B5B10)
#define HKNBLADLAAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B5A10)
#define HKNBLADLAAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B5A00)
#define HKNBLADLAAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B5BB0)
#define HKNBLADLAAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B5B30)
#define HKNBLADLAAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B5C80)
#define HKNBLADLAAE_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E5B5AD0)
#define HKNBLADLAAE_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1E5B5AF0)
#define HKNBLADLAAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B5990)
#define HKNBLADLAAE_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E5B5AE0)
#define HKNBLADLAAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B6020)
#define HKNBLADLAAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B5FD0)
#define HKNBLADLAAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B59F0)
#define HKNBLADLAAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B5CB0)
#define HKNBLADLAAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B5D10)

inline static constexpr unsigned int HKNBLADLAAE_TypeDefinitionIndex = 31065;

	class HKNBLADLAAE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		::System::UInt32 CGMBDMLPKKK; // 0x1C
		::System::UInt32 OGCMNCBOEJG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HKNBLADLAAE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HKNBLADLAAE*>**)UnitySDK::FromName("", "HKNBLADLAAE")->GetStaticField(0x45CE0);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object HDGKLMKGNND; // 0x0
		// static const ::System::Object PKHJHCONAAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBLADLAAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKNBLADLAAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKNBLADLAAE*))((::PBYTE)hIl2Cpp + HKNBLADLAAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKNBLADLAAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HKNBLADLAAE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HKNBLADLAAE*>*(*)())((::PBYTE)hIl2Cpp + HKNBLADLAAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBLADLAAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKNBLADLAAE* Clone()
		{
			return ((::HKNBLADLAAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBLADLAAE_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBLADLAAE_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKNBLADLAAE_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBLADLAAE_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKNBLADLAAE_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::UInt32 CNIEBCOEJOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBLADLAAE_CNIEBCOEJOL_OFFSET))(this);
		}

		::System::Void CHEPFLDNHBB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKNBLADLAAE_CHEPFLDNHBB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKNBLADLAAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKNBLADLAAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKNBLADLAAE*))((::PBYTE)hIl2Cpp + HKNBLADLAAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBLADLAAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBLADLAAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKNBLADLAAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBLADLAAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKNBLADLAAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKNBLADLAAE*))((::PBYTE)hIl2Cpp + HKNBLADLAAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKNBLADLAAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
