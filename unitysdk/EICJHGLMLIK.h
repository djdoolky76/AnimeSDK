#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EICJHGLMLIK;
class PPONNIHFJAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EICJHGLMLIK_ACKKJFCOGNA_OFFSET UNITYSDK_OFFSET(0x1F588440)
#define EICJHGLMLIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F588900)
#define EICJHGLMLIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F588C30)
#define EICJHGLMLIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F588390)
#define EICJHGLMLIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F588300)
#define EICJHGLMLIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5882F0)
#define EICJHGLMLIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5885F0)
#define EICJHGLMLIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F588470)
#define EICJHGLMLIK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F588460)
#define EICJHGLMLIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F588770)
#define EICJHGLMLIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5882B0)
#define EICJHGLMLIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F588A70)
#define EICJHGLMLIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5889D0)
#define EICJHGLMLIK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F588450)
#define EICJHGLMLIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5882E0)
#define EICJHGLMLIK_POEAMHIMFHO_OFFSET UNITYSDK_OFFSET(0x1F588430)
#define EICJHGLMLIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5887C0)
#define EICJHGLMLIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F588820)

inline static constexpr unsigned int EICJHGLMLIK_TypeDefinitionIndex = 35940;

	class EICJHGLMLIK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PPONNIHFJAP* LFHEKFOHLLG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EICJHGLMLIK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EICJHGLMLIK*>**)UnitySDK::FromName("", "EICJHGLMLIK")->GetStaticField(0x425D0);
		}

		// static const ::System::Object DBCNCMIDKLK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICJHGLMLIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EICJHGLMLIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EICJHGLMLIK*))((::PBYTE)hIl2Cpp + EICJHGLMLIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EICJHGLMLIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EICJHGLMLIK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EICJHGLMLIK*>*(*)())((::PBYTE)hIl2Cpp + EICJHGLMLIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EICJHGLMLIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EICJHGLMLIK* Clone()
		{
			return ((::EICJHGLMLIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EICJHGLMLIK_CLONE_OFFSET))(this);
		}

		::PPONNIHFJAP* POEAMHIMFHO()
		{
			return ((::PPONNIHFJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EICJHGLMLIK_POEAMHIMFHO_OFFSET))(this);
		}

		::System::Void ACKKJFCOGNA(::PPONNIHFJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPONNIHFJAP*))((::PBYTE)hIl2Cpp + EICJHGLMLIK_ACKKJFCOGNA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICJHGLMLIK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EICJHGLMLIK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EICJHGLMLIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EICJHGLMLIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EICJHGLMLIK*))((::PBYTE)hIl2Cpp + EICJHGLMLIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICJHGLMLIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EICJHGLMLIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EICJHGLMLIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICJHGLMLIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EICJHGLMLIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EICJHGLMLIK*))((::PBYTE)hIl2Cpp + EICJHGLMLIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EICJHGLMLIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
