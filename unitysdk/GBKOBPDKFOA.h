#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBKOBPDKFOA_GEMDLFFMKBH.h"
#include "unitysdk/System/Object.h"
class GBKOBPDKFOA;
class GJJNNBKCJKF;
class HOKMNINJPBP;
class NJPJKJBMKGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBKOBPDKFOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E402520)
#define GBKOBPDKFOA_CBIHOPJOPBB_OFFSET UNITYSDK_OFFSET(0x1E401A50)
#define GBKOBPDKFOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E402F70)
#define GBKOBPDKFOA_CFDKMGLIPPB_OFFSET UNITYSDK_OFFSET(0x1E401AD0)
#define GBKOBPDKFOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E401B70)
#define GBKOBPDKFOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4017D0)
#define GBKOBPDKFOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4017C0)
#define GBKOBPDKFOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E401C40)
#define GBKOBPDKFOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E401BE0)
#define GBKOBPDKFOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4020B0)
#define GBKOBPDKFOA_IOOHDDFMGIC_OFFSET UNITYSDK_OFFSET(0x1E401A70)
#define GBKOBPDKFOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E401750)
#define GBKOBPDKFOA_KHMAFELFFFK_OFFSET UNITYSDK_OFFSET(0x1E401BD0)
#define GBKOBPDKFOA_LGDDDKGFMJO_OFFSET UNITYSDK_OFFSET(0x1E401B50)
#define GBKOBPDKFOA_LGHDNHFCLDB_OFFSET UNITYSDK_OFFSET(0x1E401BC0)
#define GBKOBPDKFOA_LHHLPLMCDBB_OFFSET UNITYSDK_OFFSET(0x1E4019F0)
#define GBKOBPDKFOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E402B30)
#define GBKOBPDKFOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4026F0)
#define GBKOBPDKFOA_OPNDOFMBAGJ_OFFSET UNITYSDK_OFFSET(0x1E401AF0)
#define GBKOBPDKFOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4017B0)
#define GBKOBPDKFOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4022C0)
#define GBKOBPDKFOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E402320)

inline static constexpr unsigned int GBKOBPDKFOA_TypeDefinitionIndex = 27801;

	class GBKOBPDKFOA : public ::System::Object
	{
	public:
		::System::Object* DEFOHPCHOMF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::GBKOBPDKFOA_GEMDLFFMKBH EBLFDCJDFIL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GBKOBPDKFOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBKOBPDKFOA*>**)UnitySDK::FromName("", "GBKOBPDKFOA")->GetStaticField(0xCA70);
		}

		// static const ::System::Object PIAJPOBGJCO; // 0x0
		// static const ::System::Object ADBKIBNNDEE; // 0x0
		// static const ::System::Object ILKCDNIDIMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBKOBPDKFOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBKOBPDKFOA*))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBKOBPDKFOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBKOBPDKFOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBKOBPDKFOA*>*(*)())((::PBYTE)hIl2Cpp + GBKOBPDKFOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBKOBPDKFOA* Clone()
		{
			return ((::GBKOBPDKFOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_CLONE_OFFSET))(this);
		}

		::GJJNNBKCJKF* LHHLPLMCDBB()
		{
			return ((::GJJNNBKCJKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_LHHLPLMCDBB_OFFSET))(this);
		}

		::System::Void CBIHOPJOPBB(::GJJNNBKCJKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJJNNBKCJKF*))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_CBIHOPJOPBB_OFFSET))(this, a1);
		}

		::NJPJKJBMKGB* IOOHDDFMGIC()
		{
			return ((::NJPJKJBMKGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_IOOHDDFMGIC_OFFSET))(this);
		}

		::System::Void CFDKMGLIPPB(::NJPJKJBMKGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJPJKJBMKGB*))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_CFDKMGLIPPB_OFFSET))(this, a1);
		}

		::HOKMNINJPBP* OPNDOFMBAGJ()
		{
			return ((::HOKMNINJPBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_OPNDOFMBAGJ_OFFSET))(this);
		}

		::System::Void LGDDDKGFMJO(::HOKMNINJPBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOKMNINJPBP*))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_LGDDDKGFMJO_OFFSET))(this, a1);
		}

		::GBKOBPDKFOA_GEMDLFFMKBH LGHDNHFCLDB()
		{
			return ((::GBKOBPDKFOA_GEMDLFFMKBH(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_LGHDNHFCLDB_OFFSET))(this);
		}

		::System::Void KHMAFELFFFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_KHMAFELFFFK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBKOBPDKFOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBKOBPDKFOA*))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBKOBPDKFOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBKOBPDKFOA*))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBKOBPDKFOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
