#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFMJJDEDODL;
class DGGGANEOKLM;
namespace System { class Object; }

#define DFMJJDEDODL_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DD00D90)
#define DFMJJDEDODL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD00780)
#define DFMJJDEDODL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD009C0)
#define DFMJJDEDODL_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DD00F80)
#define DFMJJDEDODL_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0x1DD00CB0)
#define DFMJJDEDODL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD00CE0)
#define DFMJJDEDODL_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DD00E30)
#define DFMJJDEDODL_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1DD00890)
#define DFMJJDEDODL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD00CF0)
#define DFMJJDEDODL_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1DD00A70)

inline static constexpr unsigned int DFMJJDEDODL_TypeDefinitionIndex = 6560;

	class DFMJJDEDODL : public ::System::Object
	{
	public:
		::DGGGANEOKLM* KBDCLCIEDLP; // 0x10
		::System::Single PCKJPAIKCEK; // 0x18
		::System::Int32 FOLGGBCDKAL; // 0x1C
		// static const ::System::Object KPHPMPLNHJC; // 0x0
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DFMJJDEDODL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMJJDEDODL_DISPOSE_OFFSET))(this);
		}

		::System::Single MNGGAOFNGIP(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFMJJDEDODL_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFMJJDEDODL_FHAPPCADGCE_OFFSET))(this, a1);
		}

		::System::Void EIMIIHEDKFM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFMJJDEDODL_EIMIIHEDKFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFMJJDEDODL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMJJDEDODL_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Single BBNJCKPKPDN(::DFMJJDEDODL* a1)
		{
			return ((::System::Single(*)(::DFMJJDEDODL*))((::PBYTE)hIl2Cpp + DFMJJDEDODL_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::System::Boolean FEIIDFFOICL(::DFMJJDEDODL* a1, ::DFMJJDEDODL* a2)
		{
			return ((::System::Boolean(*)(::DFMJJDEDODL*, ::DFMJJDEDODL*))((::PBYTE)hIl2Cpp + DFMJJDEDODL_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::DFMJJDEDODL* a1, ::DFMJJDEDODL* a2)
		{
			return ((::System::Boolean(*)(::DFMJJDEDODL*, ::DFMJJDEDODL*))((::PBYTE)hIl2Cpp + DFMJJDEDODL_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
