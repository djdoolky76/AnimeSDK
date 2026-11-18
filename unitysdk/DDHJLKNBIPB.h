#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBDGKAJPALP;
class PAEBHIIPBNM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DDHJLKNBIPB_AKPFPNNKHGA_OFFSET UNITYSDK_OFFSET(0x1D3D83D0)
#define DDHJLKNBIPB_CGAEHKOCDCJ_OFFSET UNITYSDK_OFFSET(0x1D3D8910)
#define DDHJLKNBIPB_DIJGKMCCCDK_OFFSET UNITYSDK_OFFSET(0x1D3D87B0)
#define DDHJLKNBIPB_HMCKOPGINMK_OFFSET UNITYSDK_OFFSET(0x1D3D8B20)
#define DDHJLKNBIPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D8340)

inline static constexpr unsigned int DDHJLKNBIPB_TypeDefinitionIndex = 93824;

class DDHJLKNBIPB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::PAEBHIIPBNM*>* GMFLOJNKIGI; // 0x10
	::System::Int32 LKDNICBNEHF; // 0x18

	::System::Void _ctor(::System::Int32 OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDHJLKNBIPB__CTOR_OFFSET))(this, OBNIAHNMHPF);
	}

	::PAEBHIIPBNM* AKPFPNNKHGA(::KBDGKAJPALP* GEEHGDABNJF, ::Il2CppArray<::System::Int32>* IHNHOFHFHNG)
	{
		return ((::PAEBHIIPBNM*(*)(::PVOID, ::KBDGKAJPALP*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + DDHJLKNBIPB_AKPFPNNKHGA_OFFSET))(this, GEEHGDABNJF, IHNHOFHFHNG);
	}

	::PAEBHIIPBNM* DIJGKMCCCDK(::KBDGKAJPALP* GEEHGDABNJF, ::System::Int32 LPIFLOABACF)
	{
		return ((::PAEBHIIPBNM*(*)(::PVOID, ::KBDGKAJPALP*, ::System::Int32))((::PBYTE)hIl2Cpp + DDHJLKNBIPB_DIJGKMCCCDK_OFFSET))(this, GEEHGDABNJF, LPIFLOABACF);
	}

	::System::Boolean CGAEHKOCDCJ(::KBDGKAJPALP* GEEHGDABNJF, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::KBDGKAJPALP*, ::System::Int32))((::PBYTE)hIl2Cpp + DDHJLKNBIPB_CGAEHKOCDCJ_OFFSET))(this, GEEHGDABNJF, MGMDLMBEDJF);
	}

	::System::Void HMCKOPGINMK(::PAEBHIIPBNM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::PAEBHIIPBNM*))((::PBYTE)hIl2Cpp + DDHJLKNBIPB_HMCKOPGINMK_OFFSET))(this, FFNKDGGHBPP);
	}
};
