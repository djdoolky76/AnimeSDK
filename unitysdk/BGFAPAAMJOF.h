#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEBIONMOIAG.h"
#include "unitysdk/System/Object.h"
class BGFAPAAMJOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGFAPAAMJOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA74600)
#define BGFAPAAMJOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA74910)
#define BGFAPAAMJOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA74240)
#define BGFAPAAMJOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA74210)
#define BGFAPAAMJOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA74200)
#define BGFAPAAMJOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA743B0)
#define BGFAPAAMJOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA742D0)
#define BGFAPAAMJOF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA742C0)
#define BGFAPAAMJOF_FKLHAKNNIJN_OFFSET UNITYSDK_OFFSET(0x1EA742A0)
#define BGFAPAAMJOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA74480)
#define BGFAPAAMJOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA741C0)
#define BGFAPAAMJOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA74790)
#define BGFAPAAMJOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA74750)
#define BGFAPAAMJOF_MPHNMOGNEHL_OFFSET UNITYSDK_OFFSET(0x1EA74290)
#define BGFAPAAMJOF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA742B0)
#define BGFAPAAMJOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA741F0)
#define BGFAPAAMJOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA744B0)
#define BGFAPAAMJOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA74510)

inline static constexpr unsigned int BGFAPAAMJOF_TypeDefinitionIndex = 32066;

	class BGFAPAAMJOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JEBIONMOIAG MJANJHJIDLG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BGFAPAAMJOF")->GetStaticField(0x42B60);
		}

		// static const ::System::Object DNJOOPFPAKL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGFAPAAMJOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFAPAAMJOF*))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGFAPAAMJOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BGFAPAAMJOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGFAPAAMJOF* Clone()
		{
			return ((::BGFAPAAMJOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_CLONE_OFFSET))(this);
		}

		::JEBIONMOIAG MPHNMOGNEHL()
		{
			return ((::JEBIONMOIAG(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_MPHNMOGNEHL_OFFSET))(this);
		}

		::System::Void FKLHAKNNIJN(::JEBIONMOIAG a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEBIONMOIAG))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_FKLHAKNNIJN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGFAPAAMJOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGFAPAAMJOF*))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGFAPAAMJOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFAPAAMJOF*))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGFAPAAMJOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
