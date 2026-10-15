#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHBJLGFHLHM;
class ECDINHEHKOJ;
class IEDLKIGJLEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHBJLGFHLHM_AAFNHNBAGBL_OFFSET UNITYSDK_OFFSET(0x1DDF3190)
#define BHBJLGFHLHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDF3860)
#define BHBJLGFHLHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF3CD0)
#define BHBJLGFHLHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDF3050)
#define BHBJLGFHLHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDF2F70)
#define BHBJLGFHLHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2F60)
#define BHBJLGFHLHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDF3340)
#define BHBJLGFHLHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDF31F0)
#define BHBJLGFHLHM_FEONDNCNGJN_OFFSET UNITYSDK_OFFSET(0x1DDF31B0)
#define BHBJLGFHLHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDF3580)
#define BHBJLGFHLHM_GLPMDKCKPBM_OFFSET UNITYSDK_OFFSET(0x1DDF31E0)
#define BHBJLGFHLHM_HFMEOHAFOPB_OFFSET UNITYSDK_OFFSET(0x1DDF3170)
#define BHBJLGFHLHM_JIAHAGPOJLI_OFFSET UNITYSDK_OFFSET(0x1DDF31D0)
#define BHBJLGFHLHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDF2EF0)
#define BHBJLGFHLHM_KKFHLEJDCGH_OFFSET UNITYSDK_OFFSET(0x1DDF31C0)
#define BHBJLGFHLHM_LCKCHAAHAJB_OFFSET UNITYSDK_OFFSET(0x1DDF31A0)
#define BHBJLGFHLHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDF3B30)
#define BHBJLGFHLHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDF3970)
#define BHBJLGFHLHM_NKKEEBNBBOK_OFFSET UNITYSDK_OFFSET(0x1DDF3180)
#define BHBJLGFHLHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2F50)
#define BHBJLGFHLHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDF3630)
#define BHBJLGFHLHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDF3690)

	class BHBJLGFHLHM : public ::System::Object
	{
	public:
		::IEDLKIGJLEM* ABJEKLKBNGO; // 0x10
		::ECDINHEHKOJ* CDENJFDGGLJ; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Boolean EGOAMBNKKJO; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 NKHBGBNHMDC; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BHBJLGFHLHM")->GetStaticField(0x45730);
		}

		// static const ::System::Object JDIJLNGMBND; // 0x0
		// static const ::System::Object EDKCMJBCFAP; // 0x0
		// static const ::System::Object PGLNAABMNKN; // 0x0
		// static const ::System::Object MHFDCNDAPIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHBJLGFHLHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHBJLGFHLHM*))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBJLGFHLHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BHBJLGFHLHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHBJLGFHLHM* Clone()
		{
			return ((::BHBJLGFHLHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_CLONE_OFFSET))(this);
		}

		::System::Boolean HFMEOHAFOPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_HFMEOHAFOPB_OFFSET))(this);
		}

		::System::Void NKKEEBNBBOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_NKKEEBNBBOK_OFFSET))(this, a1);
		}

		::ECDINHEHKOJ* AAFNHNBAGBL()
		{
			return ((::ECDINHEHKOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_AAFNHNBAGBL_OFFSET))(this);
		}

		::System::Void LCKCHAAHAJB(::ECDINHEHKOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECDINHEHKOJ*))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_LCKCHAAHAJB_OFFSET))(this, a1);
		}

		::System::UInt32 FEONDNCNGJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_FEONDNCNGJN_OFFSET))(this);
		}

		::System::Void KKFHLEJDCGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_KKFHLEJDCGH_OFFSET))(this, a1);
		}

		::IEDLKIGJLEM* JIAHAGPOJLI()
		{
			return ((::IEDLKIGJLEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_JIAHAGPOJLI_OFFSET))(this);
		}

		::System::Void GLPMDKCKPBM(::IEDLKIGJLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEDLKIGJLEM*))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_GLPMDKCKPBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHBJLGFHLHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHBJLGFHLHM*))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHBJLGFHLHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHBJLGFHLHM*))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHBJLGFHLHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
