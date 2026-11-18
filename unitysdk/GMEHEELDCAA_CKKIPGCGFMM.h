#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMEHEELDCAA_CKKIPGCGFMM_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x125E5740)
#define GMEHEELDCAA_CKKIPGCGFMM_MCEMHAIBPEP_OFFSET UNITYSDK_OFFSET(0x125E5820)
#define GMEHEELDCAA_CKKIPGCGFMM_NLPCGDDICLE_OFFSET UNITYSDK_OFFSET(0x125E58A0)
#define GMEHEELDCAA_CKKIPGCGFMM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x125E5790)
#define GMEHEELDCAA_CKKIPGCGFMM_OLEOIDMBPHH_OFFSET UNITYSDK_OFFSET(0x125E58B0)
#define GMEHEELDCAA_CKKIPGCGFMM_PMIKMLGCJAM_OFFSET UNITYSDK_OFFSET(0x125E5780)
#define GMEHEELDCAA_CKKIPGCGFMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x125E5600)
#define GMEHEELDCAA_CKKIPGCGFMM__CTOR_OFFSET UNITYSDK_OFFSET(0x125E56E0)

inline static constexpr unsigned int GMEHEELDCAA_CKKIPGCGFMM_TypeDefinitionIndex = 48433;

class GMEHEELDCAA_CKKIPGCGFMM : public ::System::Object
{
public:
	::System::String* JAOIHBNAKMM; // 0x10
	::System::Action* JNCGLPCKKFL; // 0x18
	::System::String* MOMNHPHNIJN; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* _NMBNMIMKJHI_k__BackingField; // 0x28
	::System::Single DNBCHKMFLEC; // 0x30
	::System::Int32 _EAGDOBLNHBK_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEHEELDCAA_CKKIPGCGFMM__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEHEELDCAA_CKKIPGCGFMM_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEHEELDCAA_CKKIPGCGFMM_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void PMIKMLGCJAM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMEHEELDCAA_CKKIPGCGFMM_PMIKMLGCJAM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEHEELDCAA_CKKIPGCGFMM_NPOLNFDBOOD_OFFSET))(this);
	}

	::GMEHEELDCAA_CKKIPGCGFMM* MCEMHAIBPEP(::System::String* CJBJONJDOLI)
	{
		return ((::GMEHEELDCAA_CKKIPGCGFMM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GMEHEELDCAA_CKKIPGCGFMM_MCEMHAIBPEP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Collections::Generic::List_1<::System::Object*>* NLPCGDDICLE()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEHEELDCAA_CKKIPGCGFMM_NLPCGDDICLE_OFFSET))(this);
	}

	::System::Int32 OLEOIDMBPHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEHEELDCAA_CKKIPGCGFMM_OLEOIDMBPHH_OFFSET))(this);
	}
};
