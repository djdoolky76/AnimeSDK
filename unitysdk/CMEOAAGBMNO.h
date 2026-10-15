#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvPassByValueClientOnly; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CMEOAAGBMNO_CTOR_OFFSET UNITYSDK_OFFSET(0xDA29C40)
#define CMEOAAGBMNO_DAMJBLDPKAD_OFFSET UNITYSDK_OFFSET(0xDA2AD20)
#define CMEOAAGBMNO_EJFOGHMDGDL_OFFSET UNITYSDK_OFFSET(0xDA2A5C0)
#define CMEOAAGBMNO_EOMBAJELKLL_OFFSET UNITYSDK_OFFSET(0xDA2B080)
#define CMEOAAGBMNO_HCEIACLBOEF_OFFSET UNITYSDK_OFFSET(0xDA2A2A0)
#define CMEOAAGBMNO_HOBDHDEJLAJ_OFFSET UNITYSDK_OFFSET(0xDA29D50)
#define CMEOAAGBMNO_INOHICKCBAJ_OFFSET UNITYSDK_OFFSET(0xDA2A130)
#define CMEOAAGBMNO_MPBCEPDCPCJ_OFFSET UNITYSDK_OFFSET(0xDA29F90)
#define CMEOAAGBMNO_OBMCCIPHFEH_OFFSET UNITYSDK_OFFSET(0xDA2B450)
#define CMEOAAGBMNO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA29C70)
#define CMEOAAGBMNO_PPKPKNNDDON_OFFSET UNITYSDK_OFFSET(0xDA29E80)

inline static constexpr unsigned int CMEOAAGBMNO_TypeDefinitionIndex = 52463;

	class CMEOAAGBMNO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPassByValueClientOnly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPassByValueClientOnly*))((::PBYTE)hIl2Cpp + CMEOAAGBMNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEOAAGBMNO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Object* MPBCEPDCPCJ(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CMEOAAGBMNO_MPBCEPDCPCJ_OFFSET))(this, a1);
		}

		::System::Object* INOHICKCBAJ(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CMEOAAGBMNO_INOHICKCBAJ_OFFSET))(this, a1);
		}

		::System::Object* HCEIACLBOEF(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CMEOAAGBMNO_HCEIACLBOEF_OFFSET))(this, a1);
		}

		::System::Object* EJFOGHMDGDL(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CMEOAAGBMNO_EJFOGHMDGDL_OFFSET))(this, a1, a2);
		}

		::System::Object* HOBDHDEJLAJ(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CMEOAAGBMNO_HOBDHDEJLAJ_OFFSET))(this, a1);
		}

		::System::Boolean DAMJBLDPKAD(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CMEOAAGBMNO_DAMJBLDPKAD_OFFSET))(this, a1, a2);
		}

		::System::Boolean EOMBAJELKLL(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CMEOAAGBMNO_EOMBAJELKLL_OFFSET))(this, a1, a2);
		}

		::System::Boolean OBMCCIPHFEH(::System::String* a1, ::System::UInt32 a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CMEOAAGBMNO_OBMCCIPHFEH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PPKPKNNDDON(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CMEOAAGBMNO_PPKPKNNDDON_OFFSET))(this, a1, a2);
		}

	};
