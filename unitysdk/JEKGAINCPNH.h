#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEKGAINCPNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEKGAINCPNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E71F320)
#define JEKGAINCPNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71F540)
#define JEKGAINCPNH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E71EF10)
#define JEKGAINCPNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E71EEE0)
#define JEKGAINCPNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71EED0)
#define JEKGAINCPNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E71F0A0)
#define JEKGAINCPNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E71EFA0)
#define JEKGAINCPNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E71F210)
#define JEKGAINCPNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E71EE60)
#define JEKGAINCPNH_LALBGFNNAEG_OFFSET UNITYSDK_OFFSET(0x1E71EF80)
#define JEKGAINCPNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E71F3E0)
#define JEKGAINCPNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E71F3B0)
#define JEKGAINCPNH_MPMECGADPCG_OFFSET UNITYSDK_OFFSET(0x1E71EF90)
#define JEKGAINCPNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E71EEC0)
#define JEKGAINCPNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E71F240)
#define JEKGAINCPNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E71F2A0)

inline static constexpr unsigned int JEKGAINCPNH_TypeDefinitionIndex = 32892;

	class JEKGAINCPNH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HNCMHMDBMEL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JEKGAINCPNH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEKGAINCPNH*>**)UnitySDK::FromName("", "JEKGAINCPNH")->GetStaticField(0x5F120);
		}

		// static const ::System::Object FFKHPGKOJCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKGAINCPNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEKGAINCPNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEKGAINCPNH*))((::PBYTE)hIl2Cpp + JEKGAINCPNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEKGAINCPNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEKGAINCPNH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEKGAINCPNH*>*(*)())((::PBYTE)hIl2Cpp + JEKGAINCPNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKGAINCPNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEKGAINCPNH* Clone()
		{
			return ((::JEKGAINCPNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKGAINCPNH_CLONE_OFFSET))(this);
		}

		::System::UInt32 LALBGFNNAEG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKGAINCPNH_LALBGFNNAEG_OFFSET))(this);
		}

		::System::Void MPMECGADPCG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEKGAINCPNH_MPMECGADPCG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEKGAINCPNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEKGAINCPNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEKGAINCPNH*))((::PBYTE)hIl2Cpp + JEKGAINCPNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKGAINCPNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKGAINCPNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEKGAINCPNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKGAINCPNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEKGAINCPNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEKGAINCPNH*))((::PBYTE)hIl2Cpp + JEKGAINCPNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEKGAINCPNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
