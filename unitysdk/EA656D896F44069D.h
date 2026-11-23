#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A1D6A6889FBA25E5;
class A76547D916F2DC96;
class F3A019B3697FD5CF;
class F85E9E1EC79218CF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EA656D896F44069D_A1B13713E44B3C52_OFFSET UNITYSDK_OFFSET(0x1FC72A0)
#define EA656D896F44069D_A5BF533209FF78C2_OFFSET UNITYSDK_OFFSET(0x1FC7330)
#define EA656D896F44069D_EC99F5DD32F57EAB_OFFSET UNITYSDK_OFFSET(0x1FC6CE0)
#define EA656D896F44069D_F6F200484FEA5A36_OFFSET UNITYSDK_OFFSET(0x1FC71F0)
#define EA656D896F44069D_FBDD70599CA61CE4_OFFSET UNITYSDK_OFFSET(0x1FC6F90)
#define EA656D896F44069D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF9B10)

inline static constexpr unsigned int EA656D896F44069D_TypeDefinitionIndex = 6814;

class EA656D896F44069D : public ::System::Object
{
public:
	::A1D6A6889FBA25E5* E92CBF174A064DFC; // 0x10
	::System::String* F95ECDD632BFA837; // 0x18
	::A76547D916F2DC96* A0457E7C8A1F6E95; // 0x20
	::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>* B2FCA5E978E5B2FB; // 0x28

	::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>* FBDD70599CA61CE4(::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>* E7AA1613F8262D50)
	{
		return ((::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>*))((::PBYTE)hIl2Cpp + EA656D896F44069D_FBDD70599CA61CE4_OFFSET))(this, E7AA1613F8262D50);
	}

	::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>* A5BF533209FF78C2(::F85E9E1EC79218CF* E297DFE1AC46362D)
	{
		return ((::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>*(*)(::PVOID, ::F85E9E1EC79218CF*))((::PBYTE)hIl2Cpp + EA656D896F44069D_A5BF533209FF78C2_OFFSET))(this, E297DFE1AC46362D);
	}

	::System::Void _ctor(::A1D6A6889FBA25E5* B1FB115C4DF71CAD, ::System::String* A266C4C8AFCAA36C, ::A76547D916F2DC96* F2F47DA636A001F4)
	{
		return ((::System::Void(*)(::PVOID, ::A1D6A6889FBA25E5*, ::System::String*, ::A76547D916F2DC96*))((::PBYTE)hIl2Cpp + EA656D896F44069D__CTOR_OFFSET))(this, B1FB115C4DF71CAD, A266C4C8AFCAA36C, F2F47DA636A001F4);
	}

	::System::Collections::Generic::List_1<::System::Object*>* EC99F5DD32F57EAB(::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>* A7C3A7D8A26055FF)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>*))((::PBYTE)hIl2Cpp + EA656D896F44069D_EC99F5DD32F57EAB_OFFSET))(this, A7C3A7D8A26055FF);
	}

	::System::Collections::Generic::List_1<::System::Object*>* F6F200484FEA5A36(::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>* E7AA1613F8262D50, ::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>*& BFC720AAD000A717)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>*, ::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>*&))((::PBYTE)hIl2Cpp + EA656D896F44069D_F6F200484FEA5A36_OFFSET))(this, E7AA1613F8262D50, BFC720AAD000A717);
	}

	::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>* A1B13713E44B3C52()
	{
		return ((::System::Collections::Generic::List_1<::F3A019B3697FD5CF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EA656D896F44069D_A1B13713E44B3C52_OFFSET))(this);
	}
};
