#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BABHLKDOAKH.h"

class DDHJLKNBIPB;
class ICKJADGNCHO;
class KBDGKAJPALP;
class PAEBHIIPBNM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMLKIDMLKBO_AJBIHABIKPI_OFFSET UNITYSDK_OFFSET(0x1CCD88E0)
#define OMLKIDMLKBO_ANDFNPHOGGF_OFFSET UNITYSDK_OFFSET(0x1CCD8740)
#define OMLKIDMLKBO_DIJGKMCCCDK_OFFSET UNITYSDK_OFFSET(0x1CCD84C0)
#define OMLKIDMLKBO_JKAELLMBEAM_OFFSET UNITYSDK_OFFSET(0x1CCD8660)
#define OMLKIDMLKBO_NLFLMLCGMGO_OFFSET UNITYSDK_OFFSET(0x1CCD8E20)
#define OMLKIDMLKBO_ONPKHALNNPO_OFFSET UNITYSDK_OFFSET(0x1CCD8980)
#define OMLKIDMLKBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD8420)

inline static constexpr unsigned int OMLKIDMLKBO_TypeDefinitionIndex = 93928;

class OMLKIDMLKBO : public ::System::Object
{
public:
	::ICKJADGNCHO* NOKENJAKDGI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DDHJLKNBIPB*>* MHGFKGMMKJJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLKIDMLKBO__CTOR_OFFSET))(this);
	}

	::PAEBHIIPBNM* DIJGKMCCCDK(::KBDGKAJPALP* GEEHGDABNJF, ::System::Int32 LPIFLOABACF)
	{
		return ((::PAEBHIIPBNM*(*)(::PVOID, ::KBDGKAJPALP*, ::System::Int32))((::PBYTE)hIl2Cpp + OMLKIDMLKBO_DIJGKMCCCDK_OFFSET))(this, GEEHGDABNJF, LPIFLOABACF);
	}

	::System::Collections::Generic::List_1<::BABHLKDOAKH>* JKAELLMBEAM(::KBDGKAJPALP* GEEHGDABNJF, ::System::Int32 NADEONENDKJ, ::System::Int32 AMCDAOJKFNF)
	{
		return ((::System::Collections::Generic::List_1<::BABHLKDOAKH>*(*)(::PVOID, ::KBDGKAJPALP*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OMLKIDMLKBO_JKAELLMBEAM_OFFSET))(this, GEEHGDABNJF, NADEONENDKJ, AMCDAOJKFNF);
	}

	::System::Boolean ANDFNPHOGGF(::KBDGKAJPALP* GEEHGDABNJF, ::System::Int32 LPIFLOABACF)
	{
		return ((::System::Boolean(*)(::PVOID, ::KBDGKAJPALP*, ::System::Int32))((::PBYTE)hIl2Cpp + OMLKIDMLKBO_ANDFNPHOGGF_OFFSET))(this, GEEHGDABNJF, LPIFLOABACF);
	}

	::System::Void AJBIHABIKPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLKIDMLKBO_AJBIHABIKPI_OFFSET))(this);
	}

	::System::Void ONPKHALNNPO(::KBDGKAJPALP* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::KBDGKAJPALP*))((::PBYTE)hIl2Cpp + OMLKIDMLKBO_ONPKHALNNPO_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Collections::Generic::List_1<::BABHLKDOAKH>* NLFLMLCGMGO(::KBDGKAJPALP* GEEHGDABNJF, ::System::Int32 JKMEAELNEDN, ::System::Int32 AMCDAOJKFNF, ::System::Collections::Generic::List_1<::System::Int32>* EHPFICCHOPD)
	{
		return ((::System::Collections::Generic::List_1<::BABHLKDOAKH>*(*)(::PVOID, ::KBDGKAJPALP*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OMLKIDMLKBO_NLFLMLCGMGO_OFFSET))(this, GEEHGDABNJF, JKMEAELNEDN, AMCDAOJKFNF, EHPFICCHOPD);
	}
};
