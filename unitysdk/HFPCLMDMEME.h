#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEILAINOLPO;
class FKFOIDMNDFG;
class HFPCLMDMEME;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFPCLMDMEME_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E5446A0)
#define HFPCLMDMEME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E544D30)
#define HFPCLMDMEME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E545040)
#define HFPCLMDMEME_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5445B0)
#define HFPCLMDMEME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5444D0)
#define HFPCLMDMEME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5444C0)
#define HFPCLMDMEME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E544910)
#define HFPCLMDMEME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5446E0)
#define HFPCLMDMEME_FGLMHIPICNM_OFFSET UNITYSDK_OFFSET(0x1E5446D0)
#define HFPCLMDMEME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E544B40)
#define HFPCLMDMEME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E544480)
#define HFPCLMDMEME_KAFMPINCMJJ_OFFSET UNITYSDK_OFFSET(0x1E5446C0)
#define HFPCLMDMEME_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E5446B0)
#define HFPCLMDMEME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E544E90)
#define HFPCLMDMEME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E544DC0)
#define HFPCLMDMEME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5444B0)
#define HFPCLMDMEME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E544BF0)
#define HFPCLMDMEME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E544C50)

inline static constexpr unsigned int HFPCLMDMEME_TypeDefinitionIndex = 33527;

	class HFPCLMDMEME : public ::System::Object
	{
	public:
		::FKFOIDMNDFG* GDLOOLAHGPP; // 0x10
		::EEILAINOLPO* NLIJNNMCAAO; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HFPCLMDMEME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFPCLMDMEME*>**)UnitySDK::FromName("", "HFPCLMDMEME")->GetStaticField(0x306D0);
		}

		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object JDLHDMKEFKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFPCLMDMEME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFPCLMDMEME*))((::PBYTE)hIl2Cpp + HFPCLMDMEME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFPCLMDMEME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFPCLMDMEME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFPCLMDMEME*>*(*)())((::PBYTE)hIl2Cpp + HFPCLMDMEME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFPCLMDMEME* Clone()
		{
			return ((::HFPCLMDMEME*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME_CLONE_OFFSET))(this);
		}

		::EEILAINOLPO* ADGLNFILOHI()
		{
			return ((::EEILAINOLPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::EEILAINOLPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEILAINOLPO*))((::PBYTE)hIl2Cpp + HFPCLMDMEME_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::FKFOIDMNDFG* KAFMPINCMJJ()
		{
			return ((::FKFOIDMNDFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME_KAFMPINCMJJ_OFFSET))(this);
		}

		::System::Void FGLMHIPICNM(::FKFOIDMNDFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKFOIDMNDFG*))((::PBYTE)hIl2Cpp + HFPCLMDMEME_FGLMHIPICNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFPCLMDMEME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFPCLMDMEME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFPCLMDMEME*))((::PBYTE)hIl2Cpp + HFPCLMDMEME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFPCLMDMEME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFPCLMDMEME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFPCLMDMEME*))((::PBYTE)hIl2Cpp + HFPCLMDMEME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFPCLMDMEME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
