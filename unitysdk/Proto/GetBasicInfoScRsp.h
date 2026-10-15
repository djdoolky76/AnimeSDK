#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFPDIFGDDCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class GetBasicInfoScRsp; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_GETBASICINFOSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFF5300)
#define PROTO_GETBASICINFOSCRSP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF5A50)
#define PROTO_GETBASICINFOSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFF4AD0)
#define PROTO_GETBASICINFOSCRSP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFF4A40)
#define PROTO_GETBASICINFOSCRSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF4A30)
#define PROTO_GETBASICINFOSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFF4CE0)
#define PROTO_GETBASICINFOSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFF4CB0)
#define PROTO_GETBASICINFOSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFF4E30)
#define PROTO_GETBASICINFOSCRSP_GET_CURDAY_OFFSET UNITYSDK_OFFSET(0x1DFF4C50)
#define PROTO_GETBASICINFOSCRSP_GET_EXCHANGETIMES_OFFSET UNITYSDK_OFFSET(0x1DFF4B70)
#define PROTO_GETBASICINFOSCRSP_GET_GAMEPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1DFF4B90)
#define PROTO_GETBASICINFOSCRSP_GET_GENDER_OFFSET UNITYSDK_OFFSET(0x1DFF4C70)
#define PROTO_GETBASICINFOSCRSP_GET_ISGENDERSET_OFFSET UNITYSDK_OFFSET(0x1DFF4BF0)
#define PROTO_GETBASICINFOSCRSP_GET_LASTSETNICKNAMETIME_OFFSET UNITYSDK_OFFSET(0x1DFF4C30)
#define PROTO_GETBASICINFOSCRSP_GET_NEXTRECOVERTIME_OFFSET UNITYSDK_OFFSET(0x1DFF4BD0)
#define PROTO_GETBASICINFOSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFF49F0)
#define PROTO_GETBASICINFOSCRSP_GET_PLAYERSETTINGINFO_OFFSET UNITYSDK_OFFSET(0x1DFF4BB0)
#define PROTO_GETBASICINFOSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF4C10)
#define PROTO_GETBASICINFOSCRSP_GET_WEEKCOCOONFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1DFF4C90)
#define PROTO_GETBASICINFOSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFF58C0)
#define PROTO_GETBASICINFOSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFF57D0)
#define PROTO_GETBASICINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFF4A20)
#define PROTO_GETBASICINFOSCRSP_SET_CURDAY_OFFSET UNITYSDK_OFFSET(0x1DFF4C60)
#define PROTO_GETBASICINFOSCRSP_SET_EXCHANGETIMES_OFFSET UNITYSDK_OFFSET(0x1DFF4B80)
#define PROTO_GETBASICINFOSCRSP_SET_GAMEPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1DFF4BA0)
#define PROTO_GETBASICINFOSCRSP_SET_GENDER_OFFSET UNITYSDK_OFFSET(0x1DFF4C80)
#define PROTO_GETBASICINFOSCRSP_SET_ISGENDERSET_OFFSET UNITYSDK_OFFSET(0x1DFF4C00)
#define PROTO_GETBASICINFOSCRSP_SET_LASTSETNICKNAMETIME_OFFSET UNITYSDK_OFFSET(0x1DFF4C40)
#define PROTO_GETBASICINFOSCRSP_SET_NEXTRECOVERTIME_OFFSET UNITYSDK_OFFSET(0x1DFF4BE0)
#define PROTO_GETBASICINFOSCRSP_SET_PLAYERSETTINGINFO_OFFSET UNITYSDK_OFFSET(0x1DFF4BC0)
#define PROTO_GETBASICINFOSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF4C20)
#define PROTO_GETBASICINFOSCRSP_SET_WEEKCOCOONFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1DFF4CA0)
#define PROTO_GETBASICINFOSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFF4EB0)
#define PROTO_GETBASICINFOSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFF4F10)

namespace Proto
{
	inline static constexpr unsigned int GetBasicInfoScRsp_TypeDefinitionIndex = 32038;

	class GetBasicInfoScRsp : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::AFPDIFGDDCN* playerSettingInfo_; // 0x18
		::System::UInt32 gender_; // 0x20
		::System::Boolean isGenderSet_; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 retcode_; // 0x28
		::System::UInt32 gameplayBirthday_; // 0x2C
		::System::UInt32 exchangeTimes_; // 0x30
		::System::Byte _padding1[0x4];
		::System::Int64 lastSetNicknameTime_; // 0x38
		::System::UInt32 curDay_; // 0x40
		::System::UInt32 weekCocoonFinishedCount_; // 0x44
		::System::Int64 nextRecoverTime_; // 0x48
		static ::Google::Protobuf::MessageParser_1<::Proto::GetBasicInfoScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GetBasicInfoScRsp*>**)UnitySDK::FromName("Proto", "GetBasicInfoScRsp")->GetStaticField(0x43B70);
		}

		// static const ::System::Object ExchangeTimesFieldNumber; // 0x0
		// static const ::System::Object GameplayBirthdayFieldNumber; // 0x0
		// static const ::System::Object PlayerSettingInfoFieldNumber; // 0x0
		// static const ::System::Object NextRecoverTimeFieldNumber; // 0x0
		// static const ::System::Object IsGenderSetFieldNumber; // 0x0
		// static const ::System::Object RetcodeFieldNumber; // 0x0
		// static const ::System::Object LastSetNicknameTimeFieldNumber; // 0x0
		// static const ::System::Object CurDayFieldNumber; // 0x0
		// static const ::System::Object GenderFieldNumber; // 0x0
		// static const ::System::Object WeekCocoonFinishedCountFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetBasicInfoScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetBasicInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GetBasicInfoScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GetBasicInfoScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetBasicInfoScRsp* Clone()
		{
			return ((::Proto::GetBasicInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ExchangeTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_EXCHANGETIMES_OFFSET))(this);
		}

		::System::Void set_ExchangeTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_EXCHANGETIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_GameplayBirthday()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_GAMEPLAYBIRTHDAY_OFFSET))(this);
		}

		::System::Void set_GameplayBirthday(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_GAMEPLAYBIRTHDAY_OFFSET))(this, a1);
		}

		::AFPDIFGDDCN* get_PlayerSettingInfo()
		{
			return ((::AFPDIFGDDCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_PLAYERSETTINGINFO_OFFSET))(this);
		}

		::System::Void set_PlayerSettingInfo(::AFPDIFGDDCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFPDIFGDDCN*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_PLAYERSETTINGINFO_OFFSET))(this, a1);
		}

		::System::Int64 get_NextRecoverTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_NEXTRECOVERTIME_OFFSET))(this);
		}

		::System::Void set_NextRecoverTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_NEXTRECOVERTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGenderSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_ISGENDERSET_OFFSET))(this);
		}

		::System::Void set_IsGenderSet(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_ISGENDERSET_OFFSET))(this, a1);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::System::Int64 get_LastSetNicknameTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_LASTSETNICKNAMETIME_OFFSET))(this);
		}

		::System::Void set_LastSetNicknameTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_LASTSETNICKNAMETIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_CURDAY_OFFSET))(this);
		}

		::System::Void set_CurDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_CURDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_Gender()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_GENDER_OFFSET))(this);
		}

		::System::Void set_Gender(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_GENDER_OFFSET))(this, a1);
		}

		::System::UInt32 get_WeekCocoonFinishedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_WEEKCOCOONFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekCocoonFinishedCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_WEEKCOCOONFINISHEDCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GetBasicInfoScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetBasicInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetBasicInfoScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetBasicInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
