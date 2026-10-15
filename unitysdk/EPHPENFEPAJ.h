#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHPENFEPAJ;
class FGFGINEFBBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPHPENFEPAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2DFE10)
#define EPHPENFEPAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E00F0)
#define EPHPENFEPAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2DF780)
#define EPHPENFEPAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2DF6D0)
#define EPHPENFEPAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DF6C0)
#define EPHPENFEPAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2DF9D0)
#define EPHPENFEPAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2DF860)
#define EPHPENFEPAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2DFCA0)
#define EPHPENFEPAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2DF680)
#define EPHPENFEPAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2DFF60)
#define EPHPENFEPAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2DFE70)
#define EPHPENFEPAJ_OCMGEDMHIEJ_OFFSET UNITYSDK_OFFSET(0x1E2DF850)
#define EPHPENFEPAJ_OKFDPNDAGGM_OFFSET UNITYSDK_OFFSET(0x1E2DF840)
#define EPHPENFEPAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2DF6B0)
#define EPHPENFEPAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2DFD20)
#define EPHPENFEPAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2DFD80)

inline static constexpr unsigned int EPHPENFEPAJ_TypeDefinitionIndex = 32304;

	class EPHPENFEPAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FGFGINEFBBK* MBFMCFBBOBN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EPHPENFEPAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPHPENFEPAJ*>**)UnitySDK::FromName("", "EPHPENFEPAJ")->GetStaticField(0x49060);
		}

		// static const ::System::Object NAGBHAIGNEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPHPENFEPAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPHPENFEPAJ*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPHPENFEPAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPHPENFEPAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPHPENFEPAJ*>*(*)())((::PBYTE)hIl2Cpp + EPHPENFEPAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPHPENFEPAJ* Clone()
		{
			return ((::EPHPENFEPAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_CLONE_OFFSET))(this);
		}

		::FGFGINEFBBK* OKFDPNDAGGM()
		{
			return ((::FGFGINEFBBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_OKFDPNDAGGM_OFFSET))(this);
		}

		::System::Void OCMGEDMHIEJ(::FGFGINEFBBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGFGINEFBBK*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_OCMGEDMHIEJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPHPENFEPAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPHPENFEPAJ*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPHPENFEPAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPHPENFEPAJ*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPHPENFEPAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
