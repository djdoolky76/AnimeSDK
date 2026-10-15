#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPNCAPLOIHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPNCAPLOIHI_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1E145D60)
#define CPNCAPLOIHI_BKNCNEDGKNO_OFFSET UNITYSDK_OFFSET(0x1E145DB0)
#define CPNCAPLOIHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E146680)
#define CPNCAPLOIHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E146A70)
#define CPNCAPLOIHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E145D00)
#define CPNCAPLOIHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E145C60)
#define CPNCAPLOIHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E145C10)
#define CPNCAPLOIHI_DIJBMAOPGOB_OFFSET UNITYSDK_OFFSET(0x1E145D90)
#define CPNCAPLOIHI_EACLIGJABGM_OFFSET UNITYSDK_OFFSET(0x1E145DC0)
#define CPNCAPLOIHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E145E60)
#define CPNCAPLOIHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E145E00)
#define CPNCAPLOIHI_FENOPBDHOIE_OFFSET UNITYSDK_OFFSET(0x1E145DD0)
#define CPNCAPLOIHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1460E0)
#define CPNCAPLOIHI_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1E145D80)
#define CPNCAPLOIHI_IDMNDCDLOGJ_OFFSET UNITYSDK_OFFSET(0x1E145DF0)
#define CPNCAPLOIHI_IEAOGELJPBD_OFFSET UNITYSDK_OFFSET(0x1E145DE0)
#define CPNCAPLOIHI_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1E145D50)
#define CPNCAPLOIHI_INAFIFPJOLB_OFFSET UNITYSDK_OFFSET(0x1E145DA0)
#define CPNCAPLOIHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E145BA0)
#define CPNCAPLOIHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E146940)
#define CPNCAPLOIHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1468A0)
#define CPNCAPLOIHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E145C00)
#define CPNCAPLOIHI_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1E145D70)
#define CPNCAPLOIHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E146350)
#define CPNCAPLOIHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1463B0)

inline static constexpr unsigned int CPNCAPLOIHI_TypeDefinitionIndex = 25643;

	class CPNCAPLOIHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* GDOJDKMCELF; // 0x18
		::System::UInt32 PPNELLDGNPC; // 0x20
		::System::UInt32 DAOHIMDOFME; // 0x24
		::System::UInt32 IOMOIFBDOEL; // 0x28
		::System::Byte _padding0[0x4];
		::System::Double BCLKCLDFMOA; // 0x30
		::System::Double LEOIDKJCJML; // 0x38
		static ::System::Object** StaticGet_IMAIPCCOFGL()
		{
			return (::System::Object**)UnitySDK::FromName("", "CPNCAPLOIHI")->GetStaticField(0x230A0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPNCAPLOIHI")->GetStaticField(0x230A8);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object PHKNMPELNOL; // 0x0
		// static const ::System::Object NFJADKMEPGI; // 0x0
		// static const ::System::Object PHODJJPEMPD; // 0x0
		// static const ::System::Object DCLDKJHAEOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPNCAPLOIHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPNCAPLOIHI*))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNCAPLOIHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPNCAPLOIHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPNCAPLOIHI* Clone()
		{
			return ((::CPNCAPLOIHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Double DIJBMAOPGOB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_DIJBMAOPGOB_OFFSET))(this);
		}

		::System::Void INAFIFPJOLB(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_INAFIFPJOLB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* BKNCNEDGKNO()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_BKNCNEDGKNO_OFFSET))(this);
		}

		::System::UInt32 EACLIGJABGM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_EACLIGJABGM_OFFSET))(this);
		}

		::System::Void FENOPBDHOIE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_FENOPBDHOIE_OFFSET))(this, a1);
		}

		::System::UInt32 IEAOGELJPBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_IEAOGELJPBD_OFFSET))(this);
		}

		::System::Void IDMNDCDLOGJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_IDMNDCDLOGJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPNCAPLOIHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPNCAPLOIHI*))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPNCAPLOIHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPNCAPLOIHI*))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPNCAPLOIHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
