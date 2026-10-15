#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPFLBBKOPNN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPFLBBKOPNN_BBJLFCDPENO_OFFSET UNITYSDK_OFFSET(0x1E016DB0)
#define BPFLBBKOPNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0171E0)
#define BPFLBBKOPNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0174F0)
#define BPFLBBKOPNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E016D60)
#define BPFLBBKOPNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E016D20)
#define BPFLBBKOPNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E016D10)
#define BPFLBBKOPNN_DMIPGEIAKPM_OFFSET UNITYSDK_OFFSET(0x1E016DF0)
#define BPFLBBKOPNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E016F00)
#define BPFLBBKOPNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E016E10)
#define BPFLBBKOPNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E016FE0)
#define BPFLBBKOPNN_GGHOLPMHAHB_OFFSET UNITYSDK_OFFSET(0x1E016E00)
#define BPFLBBKOPNN_GJHNENFOOMB_OFFSET UNITYSDK_OFFSET(0x1E016DE0)
#define BPFLBBKOPNN_HGCBHPAMGAJ_OFFSET UNITYSDK_OFFSET(0x1E016DD0)
#define BPFLBBKOPNN_HIMNIPNEPBG_OFFSET UNITYSDK_OFFSET(0x1E016DC0)
#define BPFLBBKOPNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E016CD0)
#define BPFLBBKOPNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E017350)
#define BPFLBBKOPNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E017300)
#define BPFLBBKOPNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E016D00)
#define BPFLBBKOPNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E017010)
#define BPFLBBKOPNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E017070)

inline static constexpr unsigned int BPFLBBKOPNN_TypeDefinitionIndex = 28396;

	class BPFLBBKOPNN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LGHPHHMDNJO; // 0x18
		::System::Boolean FDKCODKDNBA; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 KAJKJEOCJGL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BPFLBBKOPNN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPFLBBKOPNN*>**)UnitySDK::FromName("", "BPFLBBKOPNN")->GetStaticField(0x5ED50);
		}

		// static const ::System::Object FMKHCBNDKMJ; // 0x0
		// static const ::System::Object NLHAIFMEBGN; // 0x0
		// static const ::System::Object JLFFFPBODGF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPFLBBKOPNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPFLBBKOPNN*))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPFLBBKOPNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BPFLBBKOPNN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPFLBBKOPNN*>*(*)())((::PBYTE)hIl2Cpp + BPFLBBKOPNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPFLBBKOPNN* Clone()
		{
			return ((::BPFLBBKOPNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_CLONE_OFFSET))(this);
		}

		::System::Boolean BBJLFCDPENO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_BBJLFCDPENO_OFFSET))(this);
		}

		::System::Void HIMNIPNEPBG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_HIMNIPNEPBG_OFFSET))(this, a1);
		}

		::System::UInt32 HGCBHPAMGAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_HGCBHPAMGAJ_OFFSET))(this);
		}

		::System::Void GJHNENFOOMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_GJHNENFOOMB_OFFSET))(this, a1);
		}

		::System::UInt32 DMIPGEIAKPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_DMIPGEIAKPM_OFFSET))(this);
		}

		::System::Void GGHOLPMHAHB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_GGHOLPMHAHB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPFLBBKOPNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPFLBBKOPNN*))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPFLBBKOPNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPFLBBKOPNN*))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPFLBBKOPNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
