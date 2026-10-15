#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMOHFCEEBNK;
class FGGJCLDLMMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMOHFCEEBNK_AEBCNLILLPL_OFFSET UNITYSDK_OFFSET(0x1E4F9170)
#define AMOHFCEEBNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F97F0)
#define AMOHFCEEBNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F9B30)
#define AMOHFCEEBNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F90D0)
#define AMOHFCEEBNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F9040)
#define AMOHFCEEBNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F9030)
#define AMOHFCEEBNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F9300)
#define AMOHFCEEBNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F9190)
#define AMOHFCEEBNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F95D0)
#define AMOHFCEEBNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F8FF0)
#define AMOHFCEEBNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F9960)
#define AMOHFCEEBNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F9850)
#define AMOHFCEEBNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F9020)
#define AMOHFCEEBNK_PKAIIIFPHCP_OFFSET UNITYSDK_OFFSET(0x1E4F9180)
#define AMOHFCEEBNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F9700)
#define AMOHFCEEBNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F9760)

inline static constexpr unsigned int AMOHFCEEBNK_TypeDefinitionIndex = 33662;

	class AMOHFCEEBNK : public ::System::Object
	{
	public:
		::FGGJCLDLMMI* GFCKHKCHJMB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AMOHFCEEBNK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMOHFCEEBNK*>**)UnitySDK::FromName("", "AMOHFCEEBNK")->GetStaticField(0x45EA0);
		}

		// static const ::System::Object FLCLBJDAKBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMOHFCEEBNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMOHFCEEBNK*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMOHFCEEBNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMOHFCEEBNK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMOHFCEEBNK*>*(*)())((::PBYTE)hIl2Cpp + AMOHFCEEBNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMOHFCEEBNK* Clone()
		{
			return ((::AMOHFCEEBNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_CLONE_OFFSET))(this);
		}

		::FGGJCLDLMMI* AEBCNLILLPL()
		{
			return ((::FGGJCLDLMMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_AEBCNLILLPL_OFFSET))(this);
		}

		::System::Void PKAIIIFPHCP(::FGGJCLDLMMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGGJCLDLMMI*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_PKAIIIFPHCP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMOHFCEEBNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMOHFCEEBNK*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMOHFCEEBNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMOHFCEEBNK*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
