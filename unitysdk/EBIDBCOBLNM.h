#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBIDBCOBLNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBIDBCOBLNM_ADMIPBEIKFD_OFFSET UNITYSDK_OFFSET(0x1E20A2A0)
#define EBIDBCOBLNM_BLPNFKDFHBI_OFFSET UNITYSDK_OFFSET(0x1E20A250)
#define EBIDBCOBLNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E20A5C0)
#define EBIDBCOBLNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20A940)
#define EBIDBCOBLNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E20A1D0)
#define EBIDBCOBLNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E20A190)
#define EBIDBCOBLNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20A180)
#define EBIDBCOBLNM_DGIFKEPGBJN_OFFSET UNITYSDK_OFFSET(0x1E20A270)
#define EBIDBCOBLNM_DJJNAEFMKBF_OFFSET UNITYSDK_OFFSET(0x1E20A260)
#define EBIDBCOBLNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E20A330)
#define EBIDBCOBLNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E20A2B0)
#define EBIDBCOBLNM_FKGKNOPOPFO_OFFSET UNITYSDK_OFFSET(0x1E20A290)
#define EBIDBCOBLNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E20A400)
#define EBIDBCOBLNM_JHIACENIFKF_OFFSET UNITYSDK_OFFSET(0x1E20A280)
#define EBIDBCOBLNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E20A110)
#define EBIDBCOBLNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E20A7A0)
#define EBIDBCOBLNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E20A750)
#define EBIDBCOBLNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E20A170)
#define EBIDBCOBLNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E20A430)
#define EBIDBCOBLNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E20A490)

inline static constexpr unsigned int EBIDBCOBLNM_TypeDefinitionIndex = 33427;

	class EBIDBCOBLNM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CBKDOGIPMAA; // 0x18
		::System::UInt32 FDPACMECICH; // 0x1C
		::System::UInt32 PPCJPCJCMIN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EBIDBCOBLNM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EBIDBCOBLNM*>**)UnitySDK::FromName("", "EBIDBCOBLNM")->GetStaticField(0x40160);
		}

		// static const ::System::Object KDADMMPDAFA; // 0x0
		// static const ::System::Object LCCJADEADIA; // 0x0
		// static const ::System::Object PBDNOLEAHBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBIDBCOBLNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBIDBCOBLNM*))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBIDBCOBLNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EBIDBCOBLNM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EBIDBCOBLNM*>*(*)())((::PBYTE)hIl2Cpp + EBIDBCOBLNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBIDBCOBLNM* Clone()
		{
			return ((::EBIDBCOBLNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_CLONE_OFFSET))(this);
		}

		::System::UInt32 BLPNFKDFHBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_BLPNFKDFHBI_OFFSET))(this);
		}

		::System::Void DJJNAEFMKBF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_DJJNAEFMKBF_OFFSET))(this, a1);
		}

		::System::UInt32 DGIFKEPGBJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_DGIFKEPGBJN_OFFSET))(this);
		}

		::System::Void JHIACENIFKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_JHIACENIFKF_OFFSET))(this, a1);
		}

		::System::UInt32 FKGKNOPOPFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_FKGKNOPOPFO_OFFSET))(this);
		}

		::System::Void ADMIPBEIKFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_ADMIPBEIKFD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBIDBCOBLNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBIDBCOBLNM*))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBIDBCOBLNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBIDBCOBLNM*))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBIDBCOBLNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
