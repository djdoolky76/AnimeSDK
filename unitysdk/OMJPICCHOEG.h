#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPGAHDIJJDL;
class OMJPICCHOEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMJPICCHOEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEB86D0)
#define OMJPICCHOEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB8940)
#define OMJPICCHOEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEB8090)
#define OMJPICCHOEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEB8010)
#define OMJPICCHOEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB8000)
#define OMJPICCHOEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEB82B0)
#define OMJPICCHOEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEB8140)
#define OMJPICCHOEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEB8580)
#define OMJPICCHOEG_HOLKKHDNCEO_OFFSET UNITYSDK_OFFSET(0x1DEB8120)
#define OMJPICCHOEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEB7FC0)
#define OMJPICCHOEG_LMNEBCBOIHB_OFFSET UNITYSDK_OFFSET(0x1DEB8130)
#define OMJPICCHOEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEB87C0)
#define OMJPICCHOEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEB8730)
#define OMJPICCHOEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEB7FF0)
#define OMJPICCHOEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEB85E0)
#define OMJPICCHOEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEB8640)

inline static constexpr unsigned int OMJPICCHOEG_TypeDefinitionIndex = 30176;

	class OMJPICCHOEG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DPGAHDIJJDL* HGOCDEOMKDD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OMJPICCHOEG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMJPICCHOEG*>**)UnitySDK::FromName("", "OMJPICCHOEG")->GetStaticField(0x2B4B0);
		}

		// static const ::System::Object BKLHHIOGPEJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPICCHOEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMJPICCHOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMJPICCHOEG*))((::PBYTE)hIl2Cpp + OMJPICCHOEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMJPICCHOEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMJPICCHOEG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMJPICCHOEG*>*(*)())((::PBYTE)hIl2Cpp + OMJPICCHOEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPICCHOEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMJPICCHOEG* Clone()
		{
			return ((::OMJPICCHOEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPICCHOEG_CLONE_OFFSET))(this);
		}

		::DPGAHDIJJDL* HOLKKHDNCEO()
		{
			return ((::DPGAHDIJJDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPICCHOEG_HOLKKHDNCEO_OFFSET))(this);
		}

		::System::Void LMNEBCBOIHB(::DPGAHDIJJDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPGAHDIJJDL*))((::PBYTE)hIl2Cpp + OMJPICCHOEG_LMNEBCBOIHB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMJPICCHOEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMJPICCHOEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMJPICCHOEG*))((::PBYTE)hIl2Cpp + OMJPICCHOEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPICCHOEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPICCHOEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMJPICCHOEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPICCHOEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMJPICCHOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMJPICCHOEG*))((::PBYTE)hIl2Cpp + OMJPICCHOEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMJPICCHOEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
