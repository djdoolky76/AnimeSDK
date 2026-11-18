#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAIOHODECAO;
class GEIIDCNHMDD;
class OMPFPLKPOGG;
class POEPBDHPOKE;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKHLOBHHGGI_CHICGIKFAJM_OFFSET UNITYSDK_OFFSET(0x1EFA75D0)
#define OKHLOBHHGGI_CLMDAEKDINO_OFFSET UNITYSDK_OFFSET(0x1EFA7210)
#define OKHLOBHHGGI_GJBNGIEADJP_OFFSET UNITYSDK_OFFSET(0x1EFA7190)
#define OKHLOBHHGGI_HDOGAPADPAP_OFFSET UNITYSDK_OFFSET(0x1EFA7790)
#define OKHLOBHHGGI_JNLEOBOJKDO_OFFSET UNITYSDK_OFFSET(0x1EFA73A0)
#define OKHLOBHHGGI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EFA7300)
#define OKHLOBHHGGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA70E0)

inline static constexpr unsigned int OKHLOBHHGGI_TypeDefinitionIndex = 29147;

class OKHLOBHHGGI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* BKKDDOEPGJC; // 0x10
	::GEIIDCNHMDD* FDIIPAJBDED; // 0x18
	::System::Collections::Generic::List_1<::POEPBDHPOKE*>* KMBDAMBNDFB; // 0x20
	::GEIIDCNHMDD* LLEFEOFLPDP; // 0x28
	::System::UInt64 LGGGNDEKFKC; // 0x30
	::System::UInt64 HAHALHNANIH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHLOBHHGGI__CTOR_OFFSET))(this);
	}

	::System::Void GJBNGIEADJP(::EAIOHODECAO* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::System::Boolean IOKNPLAMIKB)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + OKHLOBHHGGI_GJBNGIEADJP_OFFSET))(this, GEEHGDABNJF, BKLGNCBNEGM, IOKNPLAMIKB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHLOBHHGGI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void CLMDAEKDINO(::EAIOHODECAO* GEEHGDABNJF, ::System::Boolean IOKNPLAMIKB)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKHLOBHHGGI_CLMDAEKDINO_OFFSET))(this, GEEHGDABNJF, IOKNPLAMIKB);
	}

	::System::Void HDOGAPADPAP(::OMPFPLKPOGG* KECKGDFIALJ, ::System::Collections::Generic::HashSet_1<::System::Int32>* EAGCHNIKBMH, ::System::Boolean IOKNPLAMIKB)
	{
		return ((::System::Void(*)(::PVOID, ::OMPFPLKPOGG*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKHLOBHHGGI_HDOGAPADPAP_OFFSET))(this, KECKGDFIALJ, EAGCHNIKBMH, IOKNPLAMIKB);
	}

	::System::Void JNLEOBOJKDO(::EAIOHODECAO* GEEHGDABNJF, ::System::Boolean IOKNPLAMIKB)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKHLOBHHGGI_JNLEOBOJKDO_OFFSET))(this, GEEHGDABNJF, IOKNPLAMIKB);
	}

	::System::Void CHICGIKFAJM(::EAIOHODECAO* GEEHGDABNJF, ::System::Boolean IOKNPLAMIKB)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKHLOBHHGGI_CHICGIKFAJM_OFFSET))(this, GEEHGDABNJF, IOKNPLAMIKB);
	}
};
