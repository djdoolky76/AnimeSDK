#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELOCPGOBJFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELOCPGOBJFM_BCECGGBFEHK_OFFSET UNITYSDK_OFFSET(0x1E2A9E80)
#define ELOCPGOBJFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2AA2F0)
#define ELOCPGOBJFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AA520)
#define ELOCPGOBJFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A9E20)
#define ELOCPGOBJFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A9DE0)
#define ELOCPGOBJFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A9DD0)
#define ELOCPGOBJFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A9F60)
#define ELOCPGOBJFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A9EF0)
#define ELOCPGOBJFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2AA060)
#define ELOCPGOBJFM_GFFLMNPLHJG_OFFSET UNITYSDK_OFFSET(0x1E2A9EA0)
#define ELOCPGOBJFM_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1E2A9EC0)
#define ELOCPGOBJFM_ICMCGHDHBMJ_OFFSET UNITYSDK_OFFSET(0x1E2A9E70)
#define ELOCPGOBJFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A9D90)
#define ELOCPGOBJFM_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1E2A9EE0)
#define ELOCPGOBJFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2AA470)
#define ELOCPGOBJFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2AA420)
#define ELOCPGOBJFM_NGDLJINJKJP_OFFSET UNITYSDK_OFFSET(0x1E2A9E90)
#define ELOCPGOBJFM_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1E2A9ED0)
#define ELOCPGOBJFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A9DC0)
#define ELOCPGOBJFM_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1E2A9EB0)
#define ELOCPGOBJFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2AA090)
#define ELOCPGOBJFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2AA0F0)

inline static constexpr unsigned int ELOCPGOBJFM_TypeDefinitionIndex = 27914;

	class ELOCPGOBJFM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BCLKCLDFMOA; // 0x18
		::System::UInt32 CGCDBPPFNIC; // 0x1C
		::System::Boolean BBJIDLMAPDF; // 0x20
		::System::Boolean FCDHKKAHONG; // 0x21
		static ::Google::Protobuf::MessageParser_1<::ELOCPGOBJFM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELOCPGOBJFM*>**)UnitySDK::FromName("", "ELOCPGOBJFM")->GetStaticField(0x520F0);
		}

		// static const ::System::Object GDNKJDNMILL; // 0x0
		// static const ::System::Object ODKEBLADOMK; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object EKJIPCEFPOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELOCPGOBJFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELOCPGOBJFM*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELOCPGOBJFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELOCPGOBJFM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELOCPGOBJFM*>*(*)())((::PBYTE)hIl2Cpp + ELOCPGOBJFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELOCPGOBJFM* Clone()
		{
			return ((::ELOCPGOBJFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_CLONE_OFFSET))(this);
		}

		::System::Boolean ICMCGHDHBMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_ICMCGHDHBMJ_OFFSET))(this);
		}

		::System::Void BCECGGBFEHK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_BCECGGBFEHK_OFFSET))(this, a1);
		}

		::System::UInt32 NGDLJINJKJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_NGDLJINJKJP_OFFSET))(this);
		}

		::System::Void GFFLMNPLHJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_GFFLMNPLHJG_OFFSET))(this, a1);
		}

		::System::UInt32 PJLEOJKPGAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELOCPGOBJFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELOCPGOBJFM*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELOCPGOBJFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELOCPGOBJFM*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELOCPGOBJFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
