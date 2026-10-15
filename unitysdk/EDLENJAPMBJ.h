#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCLACMHKMFO.h"
#include "unitysdk/System/Object.h"
class EDLENJAPMBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDLENJAPMBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E261A40)
#define EDLENJAPMBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E261D50)
#define EDLENJAPMBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E261630)
#define EDLENJAPMBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E261600)
#define EDLENJAPMBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2615F0)
#define EDLENJAPMBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2617F0)
#define EDLENJAPMBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2616E0)
#define EDLENJAPMBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2618C0)
#define EDLENJAPMBJ_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E2616B0)
#define EDLENJAPMBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E261580)
#define EDLENJAPMBJ_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E2616A0)
#define EDLENJAPMBJ_LOOMPBFMBCN_OFFSET UNITYSDK_OFFSET(0x1E2616D0)
#define EDLENJAPMBJ_MCKAAMENFCE_OFFSET UNITYSDK_OFFSET(0x1E2616C0)
#define EDLENJAPMBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E261BD0)
#define EDLENJAPMBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E261B90)
#define EDLENJAPMBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2615E0)
#define EDLENJAPMBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2618F0)
#define EDLENJAPMBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E261950)

inline static constexpr unsigned int EDLENJAPMBJ_TypeDefinitionIndex = 25804;

	class EDLENJAPMBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OCLACMHKMFO CPHKLPMPADB; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EDLENJAPMBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EDLENJAPMBJ*>**)UnitySDK::FromName("", "EDLENJAPMBJ")->GetStaticField(0x40B40);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object MCCPOKCDGKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDLENJAPMBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDLENJAPMBJ*))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDLENJAPMBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EDLENJAPMBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EDLENJAPMBJ*>*(*)())((::PBYTE)hIl2Cpp + EDLENJAPMBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDLENJAPMBJ* Clone()
		{
			return ((::EDLENJAPMBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::OCLACMHKMFO MCKAAMENFCE()
		{
			return ((::OCLACMHKMFO(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_MCKAAMENFCE_OFFSET))(this);
		}

		::System::Void LOOMPBFMBCN(::OCLACMHKMFO a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCLACMHKMFO))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_LOOMPBFMBCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDLENJAPMBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDLENJAPMBJ*))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDLENJAPMBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDLENJAPMBJ*))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDLENJAPMBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
