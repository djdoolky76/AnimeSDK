#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCHBGJDOBIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCHBGJDOBIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E346D10)
#define FCHBGJDOBIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E346FE0)
#define FCHBGJDOBIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E346960)
#define FCHBGJDOBIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E346930)
#define FCHBGJDOBIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E346920)
#define FCHBGJDOBIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E346AD0)
#define FCHBGJDOBIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3469F0)
#define FCHBGJDOBIE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3469E0)
#define FCHBGJDOBIE_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E3469B0)
#define FCHBGJDOBIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E346BA0)
#define FCHBGJDOBIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3468E0)
#define FCHBGJDOBIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E346E60)
#define FCHBGJDOBIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E346E20)
#define FCHBGJDOBIE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3469D0)
#define FCHBGJDOBIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E346910)
#define FCHBGJDOBIE_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E3469C0)
#define FCHBGJDOBIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E346BD0)
#define FCHBGJDOBIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E346C30)

inline static constexpr unsigned int FCHBGJDOBIE_TypeDefinitionIndex = 34493;

	class FCHBGJDOBIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 DBDCJHECJOO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FCHBGJDOBIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCHBGJDOBIE*>**)UnitySDK::FromName("", "FCHBGJDOBIE")->GetStaticField(0x5A1D0);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCHBGJDOBIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCHBGJDOBIE*))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCHBGJDOBIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCHBGJDOBIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCHBGJDOBIE*>*(*)())((::PBYTE)hIl2Cpp + FCHBGJDOBIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCHBGJDOBIE* Clone()
		{
			return ((::FCHBGJDOBIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCHBGJDOBIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCHBGJDOBIE*))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCHBGJDOBIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCHBGJDOBIE*))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCHBGJDOBIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
