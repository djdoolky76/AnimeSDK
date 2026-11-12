#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEJKAOKHPPL_ABCPMFPCJMH.h"
#include "unitysdk/System/Object.h"
class OEJKAOKHPPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEJKAOKHPPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0D0C70)
#define OEJKAOKHPPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0D0FD0)
#define OEJKAOKHPPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0D07D0)
#define OEJKAOKHPPL_COMICMLGGBM_OFFSET UNITYSDK_OFFSET(0x1F0D07A0)
#define OEJKAOKHPPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0D0650)
#define OEJKAOKHPPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D0640)
#define OEJKAOKHPPL_DLAKPEKOGBO_OFFSET UNITYSDK_OFFSET(0x1F0D0820)
#define OEJKAOKHPPL_EPDCOFNLGJP_OFFSET UNITYSDK_OFFSET(0x1F0D0720)
#define OEJKAOKHPPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0D08A0)
#define OEJKAOKHPPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0D0840)
#define OEJKAOKHPPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0D0AA0)
#define OEJKAOKHPPL_GJDIFKNGLMM_OFFSET UNITYSDK_OFFSET(0x1F0D0830)
#define OEJKAOKHPPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0D05D0)
#define OEJKAOKHPPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0D0E50)
#define OEJKAOKHPPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0D0D80)
#define OEJKAOKHPPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0D0630)
#define OEJKAOKHPPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0D0B40)
#define OEJKAOKHPPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0D0BA0)

inline static constexpr unsigned int OEJKAOKHPPL_TypeDefinitionIndex = 29885;

	class OEJKAOKHPPL : public ::System::Object
	{
	public:
		::System::Object* EMHBAOIIKLC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::OEJKAOKHPPL_ABCPMFPCJMH IPIELNAKPKI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OEJKAOKHPPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEJKAOKHPPL*>**)UnitySDK::FromName("", "OEJKAOKHPPL")->GetStaticField(0xFD10);
		}

		// static const ::System::Object CJKFIKMJPAF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEJKAOKHPPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEJKAOKHPPL*))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEJKAOKHPPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEJKAOKHPPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEJKAOKHPPL*>*(*)())((::PBYTE)hIl2Cpp + OEJKAOKHPPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEJKAOKHPPL* Clone()
		{
			return ((::OEJKAOKHPPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 EPDCOFNLGJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_EPDCOFNLGJP_OFFSET))(this);
		}

		::System::Void COMICMLGGBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_COMICMLGGBM_OFFSET))(this, a1);
		}

		::OEJKAOKHPPL_ABCPMFPCJMH DLAKPEKOGBO()
		{
			return ((::OEJKAOKHPPL_ABCPMFPCJMH(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_DLAKPEKOGBO_OFFSET))(this);
		}

		::System::Void GJDIFKNGLMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_GJDIFKNGLMM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEJKAOKHPPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEJKAOKHPPL*))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEJKAOKHPPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEJKAOKHPPL*))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEJKAOKHPPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
