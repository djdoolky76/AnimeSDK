#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKGJKFHIPKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKGJKFHIPKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B2D50)
#define GKGJKFHIPKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B30D0)
#define GKGJKFHIPKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B2930)
#define GKGJKFHIPKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B28F0)
#define GKGJKFHIPKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B28E0)
#define GKGJKFHIPKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4B2AC0)
#define GKGJKFHIPKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B29E0)
#define GKGJKFHIPKI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4B29B0)
#define GKGJKFHIPKI_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E4B29C0)
#define GKGJKFHIPKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B2B90)
#define GKGJKFHIPKI_GHDHAGLJJOI_OFFSET UNITYSDK_OFFSET(0x1E4B2990)
#define GKGJKFHIPKI_IMCMNNDFAEP_OFFSET UNITYSDK_OFFSET(0x1E4B2980)
#define GKGJKFHIPKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4B28A0)
#define GKGJKFHIPKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B2F30)
#define GKGJKFHIPKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B2EE0)
#define GKGJKFHIPKI_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E4B29D0)
#define GKGJKFHIPKI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4B29A0)
#define GKGJKFHIPKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4B28D0)
#define GKGJKFHIPKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B2BC0)
#define GKGJKFHIPKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B2C20)

inline static constexpr unsigned int GKGJKFHIPKI_TypeDefinitionIndex = 32404;

	class GKGJKFHIPKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NDFIDCNNGMJ; // 0x18
		::System::UInt32 BENKNNHKAAC; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GKGJKFHIPKI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKGJKFHIPKI*>**)UnitySDK::FromName("", "GKGJKFHIPKI")->GetStaticField(0x1D230);
		}

		// static const ::System::Object EIGEDOPBCKH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKGJKFHIPKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKGJKFHIPKI*))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKGJKFHIPKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKGJKFHIPKI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKGJKFHIPKI*>*(*)())((::PBYTE)hIl2Cpp + GKGJKFHIPKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKGJKFHIPKI* Clone()
		{
			return ((::GKGJKFHIPKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IMCMNNDFAEP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_IMCMNNDFAEP_OFFSET))(this);
		}

		::System::Void GHDHAGLJJOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_GHDHAGLJJOI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKGJKFHIPKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKGJKFHIPKI*))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKGJKFHIPKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKGJKFHIPKI*))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKGJKFHIPKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
