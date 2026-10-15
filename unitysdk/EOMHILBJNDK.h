#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOMHILBJNDK;
class JGAMMPGMCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOMHILBJNDK_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E2D2C60)
#define EOMHILBJNDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D3150)
#define EOMHILBJNDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D3420)
#define EOMHILBJNDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D2BC0)
#define EOMHILBJNDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D2B50)
#define EOMHILBJNDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D2B40)
#define EOMHILBJNDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D2E00)
#define EOMHILBJNDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D2C80)
#define EOMHILBJNDK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2D2C50)
#define EOMHILBJNDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D2F80)
#define EOMHILBJNDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D2B00)
#define EOMHILBJNDK_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E2D2C70)
#define EOMHILBJNDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D3290)
#define EOMHILBJNDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D3220)
#define EOMHILBJNDK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2D2C40)
#define EOMHILBJNDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D2B30)
#define EOMHILBJNDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D3010)
#define EOMHILBJNDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D3070)

inline static constexpr unsigned int EOMHILBJNDK_TypeDefinitionIndex = 33696;

	class EOMHILBJNDK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JGAMMPGMCNI* NLIJNNMCAAO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EOMHILBJNDK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EOMHILBJNDK*>**)UnitySDK::FromName("", "EOMHILBJNDK")->GetStaticField(0x47650);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DMAFCIBFMPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOMHILBJNDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOMHILBJNDK*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOMHILBJNDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EOMHILBJNDK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EOMHILBJNDK*>*(*)())((::PBYTE)hIl2Cpp + EOMHILBJNDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOMHILBJNDK* Clone()
		{
			return ((::EOMHILBJNDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOMHILBJNDK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::JGAMMPGMCNI* ADGLNFILOHI()
		{
			return ((::JGAMMPGMCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOMHILBJNDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOMHILBJNDK*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOMHILBJNDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOMHILBJNDK*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
