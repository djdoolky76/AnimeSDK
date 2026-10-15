#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFNJKAPPNOF.h"
#include "unitysdk/System/Object.h"
class NKOBPKLEDFP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKOBPKLEDFP_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1EB5E4F0)
#define NKOBPKLEDFP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB5E860)
#define NKOBPKLEDFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5EB70)
#define NKOBPKLEDFP_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1EB5E500)
#define NKOBPKLEDFP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB5E4A0)
#define NKOBPKLEDFP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB5E470)
#define NKOBPKLEDFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5E460)
#define NKOBPKLEDFP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB5E610)
#define NKOBPKLEDFP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB5E530)
#define NKOBPKLEDFP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB5E6E0)
#define NKOBPKLEDFP_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1EB5E520)
#define NKOBPKLEDFP_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1EB5E510)
#define NKOBPKLEDFP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB5E420)
#define NKOBPKLEDFP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB5E9F0)
#define NKOBPKLEDFP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB5E9B0)
#define NKOBPKLEDFP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB5E450)
#define NKOBPKLEDFP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB5E710)
#define NKOBPKLEDFP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB5E770)

inline static constexpr unsigned int NKOBPKLEDFP_TypeDefinitionIndex = 29060;

	class NKOBPKLEDFP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JFNJKAPPNOF GMPNCOBOFDM; // 0x18
		::System::UInt32 PDKNJCIEBHA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NKOBPKLEDFP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NKOBPKLEDFP*>**)UnitySDK::FromName("", "NKOBPKLEDFP")->GetStaticField(0x66640);
		}

		// static const ::System::Object AFBDHEMJEPP; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKOBPKLEDFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKOBPKLEDFP*))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKOBPKLEDFP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NKOBPKLEDFP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NKOBPKLEDFP*>*(*)())((::PBYTE)hIl2Cpp + NKOBPKLEDFP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKOBPKLEDFP* Clone()
		{
			return ((::NKOBPKLEDFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_CLONE_OFFSET))(this);
		}

		::System::UInt32 AFADJMFGCGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::JFNJKAPPNOF JBIOGKPHKKC()
		{
			return ((::JFNJKAPPNOF(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::JFNJKAPPNOF a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFNJKAPPNOF))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKOBPKLEDFP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKOBPKLEDFP*))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKOBPKLEDFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKOBPKLEDFP*))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKOBPKLEDFP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
