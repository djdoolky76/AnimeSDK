#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGCGPFEOCBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGCGPFEOCBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E835710)
#define KGCGPFEOCBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E835930)
#define KGCGPFEOCBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E835360)
#define KGCGPFEOCBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E835330)
#define KGCGPFEOCBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E835320)
#define KGCGPFEOCBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E835490)
#define KGCGPFEOCBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8353C0)
#define KGCGPFEOCBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E835600)
#define KGCGPFEOCBC_JIDPGCLADOK_OFFSET UNITYSDK_OFFSET(0x1E8353B0)
#define KGCGPFEOCBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8352E0)
#define KGCGPFEOCBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8357D0)
#define KGCGPFEOCBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8357A0)
#define KGCGPFEOCBC_NEBGOPEBPIF_OFFSET UNITYSDK_OFFSET(0x1E8353A0)
#define KGCGPFEOCBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E835310)
#define KGCGPFEOCBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E835630)
#define KGCGPFEOCBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E835690)

inline static constexpr unsigned int KGCGPFEOCBC_TypeDefinitionIndex = 27647;

	class KGCGPFEOCBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DJBABHPHHOK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KGCGPFEOCBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGCGPFEOCBC*>**)UnitySDK::FromName("", "KGCGPFEOCBC")->GetStaticField(0x15B90);
		}

		// static const ::System::Object HNBBHGLOGHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGCGPFEOCBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGCGPFEOCBC*))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGCGPFEOCBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGCGPFEOCBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGCGPFEOCBC*>*(*)())((::PBYTE)hIl2Cpp + KGCGPFEOCBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGCGPFEOCBC* Clone()
		{
			return ((::KGCGPFEOCBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 NEBGOPEBPIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_NEBGOPEBPIF_OFFSET))(this);
		}

		::System::Void JIDPGCLADOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_JIDPGCLADOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGCGPFEOCBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGCGPFEOCBC*))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGCGPFEOCBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGCGPFEOCBC*))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGCGPFEOCBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
