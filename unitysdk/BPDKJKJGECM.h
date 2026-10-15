#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPDKJKJGECM_LANEEFNEKNP.h"
#include "unitysdk/System/Object.h"
class BPDKJKJGECM;
class NECNANNNGBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPDKJKJGECM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E040F50)
#define BPDKJKJGECM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0413C0)
#define BPDKJKJGECM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E040AA0)
#define BPDKJKJGECM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E040940)
#define BPDKJKJGECM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E040930)
#define BPDKJKJGECM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E040B70)
#define BPDKJKJGECM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E040B10)
#define BPDKJKJGECM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E040D80)
#define BPDKJKJGECM_GIFEHGHLKHM_OFFSET UNITYSDK_OFFSET(0x1E040B00)
#define BPDKJKJGECM_IHOEEJENJCH_OFFSET UNITYSDK_OFFSET(0x1E040A20)
#define BPDKJKJGECM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0408C0)
#define BPDKJKJGECM_MDNAHPDAJFJ_OFFSET UNITYSDK_OFFSET(0x1E040A80)
#define BPDKJKJGECM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E041170)
#define BPDKJKJGECM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E040FF0)
#define BPDKJKJGECM_OELNNNBFPPB_OFFSET UNITYSDK_OFFSET(0x1E040AF0)
#define BPDKJKJGECM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E040920)
#define BPDKJKJGECM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E040E20)
#define BPDKJKJGECM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E040E80)

inline static constexpr unsigned int BPDKJKJGECM_TypeDefinitionIndex = 28600;

	class BPDKJKJGECM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* EOEMPHLGGLE; // 0x18
		::BPDKJKJGECM_LANEEFNEKNP MLHDHBILHNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BPDKJKJGECM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPDKJKJGECM*>**)UnitySDK::FromName("", "BPDKJKJGECM")->GetStaticField(0x55030);
		}

		// static const ::System::Object IBKBAKJAIIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKJKJGECM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPDKJKJGECM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPDKJKJGECM*))((::PBYTE)hIl2Cpp + BPDKJKJGECM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPDKJKJGECM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BPDKJKJGECM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPDKJKJGECM*>*(*)())((::PBYTE)hIl2Cpp + BPDKJKJGECM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKJKJGECM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPDKJKJGECM* Clone()
		{
			return ((::BPDKJKJGECM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKJKJGECM_CLONE_OFFSET))(this);
		}

		::NECNANNNGBN* IHOEEJENJCH()
		{
			return ((::NECNANNNGBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKJKJGECM_IHOEEJENJCH_OFFSET))(this);
		}

		::System::Void MDNAHPDAJFJ(::NECNANNNGBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NECNANNNGBN*))((::PBYTE)hIl2Cpp + BPDKJKJGECM_MDNAHPDAJFJ_OFFSET))(this, a1);
		}

		::BPDKJKJGECM_LANEEFNEKNP OELNNNBFPPB()
		{
			return ((::BPDKJKJGECM_LANEEFNEKNP(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKJKJGECM_OELNNNBFPPB_OFFSET))(this);
		}

		::System::Void GIFEHGHLKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKJKJGECM_GIFEHGHLKHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPDKJKJGECM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPDKJKJGECM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPDKJKJGECM*))((::PBYTE)hIl2Cpp + BPDKJKJGECM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKJKJGECM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKJKJGECM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPDKJKJGECM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKJKJGECM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPDKJKJGECM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPDKJKJGECM*))((::PBYTE)hIl2Cpp + BPDKJKJGECM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPDKJKJGECM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
